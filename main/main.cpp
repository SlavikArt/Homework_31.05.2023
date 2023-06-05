#include "WashingMachineFacade.h"
#include "User.h"

int main()
{
    WaterPump waterPump;
    Motor motor;
    Heater heater;
    Rinser rinser;

    WashingMachineFacade washingMachine(waterPump, motor, heater, rinser);

    User user;
    user.UseWashingMachine(washingMachine);
}
