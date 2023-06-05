#pragma once
#include "WashingMachineFacade.h"

class User
{
public:
    void UseWashingMachine(WashingMachineFacade& machine)
    {
        std::cout << "Starting washing cycle...\n";
        machine.StartWashing();

        std::cout << "Washing cycle finished. Stopping...\n";
        machine.StopWashing();
    }
};
