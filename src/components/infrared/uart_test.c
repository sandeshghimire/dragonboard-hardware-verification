/**
 *  eva_ir_hw_max610.c
 *  libuei
 * 
 *  Created by Steve Orens on 5/6/16.
 *  Copyright © 2016 EVA Automation, Inc. All rights reserved.
 */

#include "eva_ir_hw_max610.h"
#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <pthread.h>
#include <sys/time.h>
#include <fcntl.h>
#include <unistd.h>

static int _ir_handle = 0;
static pthread_mutex_t _mutex;
static const char TTYS2[] = "/dev/ttyS2";

/**
 * Default select timeout values
 * Note: Learning requires a 10 second timeout
 * Note: 2 second timeout seems to work best
 */
static const int SelectDefaultTimeout_Seconds = 2;
static const int SelectDefaultTimeout_MicroSeconds = 0;
static const int SelectLearnTimeout_Seconds = 10;
static const int SelectLearnTimeout_MicroSeconds = 0;

/**
 * internal methods
 */

/* 1 represents success */
int _internal_mutex_create();
int _internal_mutex_create()
{
    if (0 != pthread_mutex_init(&_mutex, NULL))
    {
        pthread_mutex_destroy(&_mutex);
        return 0;
    }

    return 1;
}

int _internal_mutex_free();
int _internal_mutex_free()
{
    pthread_mutex_destroy(&_mutex);
    return 1;
}

int _internal_mutex_lock();
int _internal_mutex_lock()
{
    if (0 == pthread_mutex_lock(&_mutex))
    {
        return 1;
    }

    return 0;
}

int _internal_mutex_unlock();
int _internal_mutex_unlock()
{
    if (0 == pthread_mutex_unlock(&_mutex))
    {
        return 1;
    }

    return 0;
}

int _internalWakeup();
int _internalWakeup()
{
    /* wake up */
    int result = sizeof(QS_IR_BLASTER_WAKEUP) == write(_ir_handle, QS_IR_BLASTER_WAKEUP, sizeof(QS_IR_BLASTER_WAKEUP));
    /* delay after wake up */
    usleep(WaitForWakeDelayInMs);
    return result;
}

int eva_ir_open()
{
    struct termios opts;
    _internal_mutex_create();
    _ir_handle = open(TTYS2, O_RDWR | O_NOCTTY);
    if (_ir_handle <= 0)
    {
        return -1;
    }
    memset(&opts, 0, sizeof(opts));
    opts.c_cflag = B19200 | CS8 | CREAD | CLOCAL;
    opts.c_iflag = IGNPAR;
    opts.c_oflag = 0;
    opts.c_lflag = 0;
    opts.c_cc[VMIN] = 1;
    opts.c_cc[VTIME] = 0;
    tcflush(_ir_handle, TCIFLUSH);
    tcsetattr(_ir_handle, TCSANOW, &opts);

    return 0;
}

void eva_ir_close()
{
    _internal_mutex_free();
    close(_ir_handle);
    _ir_handle = 0;
}

int eva_ir_write(const unsigned char *message, int length, unsigned char *response)
{
    fd_set readfds;
    struct timeval timer;
    char buffer[5];
    int total = 0;
    int result = 0;
    int bytes_read = 0;
    int select_return = 0;
    int timeout_seconds = SelectDefaultTimeout_Seconds;
    int timeout_microseconds = SelectDefaultTimeout_MicroSeconds;

    if (_ir_handle)
    {
        if (!_internal_mutex_lock())
        {
            return 0;
        }

        /* wake up */
        if (!message)
        {
            if (!_internalWakeup())
            {
                _internal_mutex_unlock();
                return 0;
            }
        } else if (message && length > 0)
        {

            /* write header */
            if (sizeof(QS_IR_BLASTER_HEADER) != write(_ir_handle, QS_IR_BLASTER_HEADER, sizeof(QS_IR_BLASTER_HEADER)))
            {
                _internal_mutex_unlock();
                return 0;
            }

            /* write message */
            if (length != write(_ir_handle, message, length))
            {
                _internal_mutex_unlock();
                return 0;
            }
        }

        if (message && response)
        {
            /* read response */
            FD_ZERO(&readfds);
            FD_SET(_ir_handle, &readfds);
            if (message[CommandPacketIndex_CommandCode] == EVA_IR_Function_LearnAndUpload ||
                message[CommandPacketIndex_CommandCode] == EVA_IR_Function_LearnAndSave)
            {
                timeout_seconds = SelectLearnTimeout_Seconds;
                timeout_microseconds = SelectLearnTimeout_MicroSeconds;
            }
            timer.tv_sec = timeout_seconds;
            timer.tv_usec = timeout_microseconds;
            select_return = select(_ir_handle + 1, &readfds, NULL, NULL, &timer);
            if (1 == select_return)
            {
                if (1 == read(_ir_handle, response, 1))
                {
                    result = response[ReturnPacketIndex_PacketSize];
                    if (result > 0)
                    {
                        while (bytes_read != result)
                        {
                            select_return = 0;
                            timer.tv_sec = SelectDefaultTimeout_Seconds;
                            timer.tv_usec = SelectDefaultTimeout_MicroSeconds;
                            FD_ZERO(&readfds);
                            FD_SET(_ir_handle, &readfds);
                            select_return = select(_ir_handle + 1, &readfds, NULL, NULL, &timer);
                            if (1 == select_return)
                            {
                                bytes_read += read(_ir_handle, response + bytes_read + 1, result - bytes_read);
                            }
                        }
                        total = result + 1;
                        /* status only in the LOW NIBBLE */
                        response[ReturnPacketIndex_Status] = response[ReturnPacketIndex_Status] & 0x0F;
                    }
                }
            }
        }

        _internal_mutex_unlock();
    }
    return total;
}

void eva_ir_read_status(unsigned char *status)
{
    _internal_mutex_lock();

    if (1 == read(_ir_handle, status, 1))
    {
        read(_ir_handle, status, 1);
        /* status only in the LOW NIBBLE */
        *status &= 0x0f;
    }

    _internal_mutex_unlock();
}
