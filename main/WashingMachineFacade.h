#pragma once
#include "WaterPump.h"
#include "Motor.h"
#include "Heater.h"
#include "Rinser.h"

class WashingMachineFacade
{
    WaterPump waterPump;
    Motor motor;
    Heater heater;
    Rinser rinser;
public:
    WashingMachineFacade(WaterPump wp, Motor m, Heater h, Rinser r) 
        : waterPump(wp), motor(m), heater(h), rinser(r) {}

    void StartWashing()
    {
        waterPump.FillWater();
        heater.HeatWater();
        motor.StartMotor();
        rinser.StartRinsing();
    }

    void StopWashing()
    {
        rinser.StopRinsing();
        motor.StopMotor();
        heater.CoolWater();
        waterPump.DrainWater();
    }
};
