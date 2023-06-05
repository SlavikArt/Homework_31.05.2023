#pragma once
#include <iostream>

class Motor
{
public:
    void StartMotor()
    {
        std::cout << "Starting motor...\n";
    }

    void StopMotor()
    {
        std::cout << "Stopping motor...\n";
    }
};
