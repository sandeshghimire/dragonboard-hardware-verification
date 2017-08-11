/**
 *
 *  eva_ir_hw_max610.h
 * 
 *  Created by Steve Orens on 5/6/16.
 *  Copyright © 2016 EVA Automation, Inc. All rights reserved.
 *
 * Implemented based on documentation:
 *     
 *     UEI OEM QS IR Blaster (LP) Product Specification MAX610.doc
 *         Revision: v2.0 / October 28, 2013
 * 
 */

#ifndef eva_ir_hw_max610_h
#define eva_ir_hw_max610_h

#ifdef __cplusplus
extern "C" {
#endif

/**
 * EVA_IR_Function enumarates the Command Table
 */
enum EVA_IR_Function
{
    EVA_IR_Function_WakeUp = 0x00,
    EVA_IR_Function_SendKey = 0x01,
    EVA_IR_Function_GetKeyMap = 0x02,
    EVA_IR_Function_GetNextDevice = 0x03,
    EVA_IR_Function_GetPreviousDevice = 0x04,
    EVA_IR_Function_Reserved1 = 0x05,
    EVA_IR_Function_Reserved2 = 0x06,
    EVA_IR_Function_LearnAndSave = 0x07,
    EVA_IR_Function_DeleteLearnedCode = 0x08,
    EVA_IR_Function_MasterReset = 0x09,
    EVA_IR_Function_GetFirstDevice = 0x0A,
    EVA_IR_Function_GetVersion = 0x0B,
    EVA_IR_Function_DeleteDownloadCode = 0x0C,
    EVA_IR_Function_Reserved3 = 0x0D,
    EVA_IR_Function_Reserved4 = 0x0E,
    EVA_IR_Function_Reserved5 = 0x0F,
    EVA_IR_Function_SendIRPattern = 0x10,
    EVA_IR_Function_ListAllUpgradeCode = 0x11,
    EVA_IR_Function_LearnAndUpload = 0x12,
    EVA_IR_Function_Reserved6 = 0x21,
    EVA_IR_Function_DownloadDeviceToFDRA = 0x22

};

/**
 * EVA_IR_StatuCode enumerates the Command Return Status Code Table
 */
enum EVA_IR_StatusCode
{
    EVA_IR_StatusCode_Success = 0,
    EVA_IR_StatusCode_InvalidDeviceCode = 1,
    EVA_IR_StatusCode_InvalidDeviceType = 2,
    EVA_IR_StatusCode_InvalidKeyCode = 3 /* Also No IR Data Picked */
    ,
    EVA_IR_StatusCode_BadFDRA = 4,
    EVA_IR_StatusCode_OutOfMemory = 5,
    EVA_IR_StatusCode_LearningError = 6 /* Also Learning time out */
    ,
    EVA_IR_StatusCode_DataPacketFormatError = 7,
    EVA_IR_StatusCode_DownloadIDAlreadyExisted = 8,
    EVA_IR_StatusCode_LowVoltageFDRAAccessError = 9,
    EVA_IR_StatusCode_InvalidLearnCodeID = 10

};

/**
 * Index position for Command Packet exlcuding the 4 byte Header
 * Note: Parameter(s) or Data begins at index 3
 */
static const int CommandPacketIndex_PacketSizeUpper = 0;
static const int CommandPacketIndex_PacketSizeLower = 1;
static const int CommandPacketIndex_CommandCode = 2;
static const int CommandPacketIndex_Data = 3;

/**
 * Index position for Return Packet
 * Note: Parameter(s) or Data begin at index 3
 */
static const int ReturnPacketIndex_PacketSize = 0;
static const int ReturnPacketIndex_Status = 1;
static const int ReturnPacketIndex_Data = 2;

/**
 * Header
 */
static const char QS_IR_BLASTER_HEADER[4] = {0x40, 0x41, 0x42, 0x43};

/**
 * Wakeup
 */
static const char QS_IR_BLASTER_WAKEUP[1] = {0x00};

/**
 * Delay while we wait for the wake up (in Milliseconds)
 * Note: Magic number! 2*1000 seems to work best
 */
static const int WaitForWakeDelayInMs = 2 * 1000;

int eva_ir_open();
void eva_ir_close();
int eva_ir_write(const unsigned char *message, int length, unsigned char *response);
void eva_ir_read_status(unsigned char *status);

#ifdef __cplusplus
}
#endif

#endif /* eva_ir_hw_max610_h */

