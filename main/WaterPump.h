#pragma once
#include <iostream>

class WaterPump
{
public:
    void FillWater()
    {
        std::cout << "Filling water...\n";
    }

    void DrainWater()
    {
        std::cout << "Draining water...\n";
    }
};
