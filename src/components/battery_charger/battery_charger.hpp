//
// Created by Sandesh Ghimire on 7/20/17.
//

#ifndef _BATTERY_CHARGER_HPP_
#define _BATTERY_CHARGER_HPP_
#if 0
union reg00__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg01__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg02__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg03__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg04__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg05__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg06__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg07__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg03__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg08__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg09__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg0A__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg0B__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg0C__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg0d__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg0e__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg0f__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};

union reg10__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg0f11__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg12__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg0f13__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};


union reg0f14__
{
    unsigned char reg00;
    struct reg00
    {
        unsigned iinlim0 : 1;
        unsigned iinlim1 : 1;
        unsigned iinlim2 : 1;
        unsigned iinlim3 : 1;
        unsigned iinlim4 : 1;
        unsigned iinlim5 : 1;
        unsigned en_ilim : 1;
        unsigned en_hiz  : 1;
    };
};
#endif
class BatteryCharger
{
 public:
    BatteryCharger();
    virtual ~BatteryCharger();
 private:

};

#endif //_BATTERY_CHARGER_HPP_
