#pragma once
#include <iostream>

class Heater {
public:
    void HeatWater()
    {
        std::cout << "Heating water...\n";
    }

    void CoolWater()
    {
        std::cout << "Cooling water...\n";
    }
};
