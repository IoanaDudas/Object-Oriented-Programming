#pragma once

#include "Appliance.h"

class DishWasher : public Appliance{
private:
    double washingCycleLength;
    double consumedEnergyForOneHour;
public:

    DishWasher(string id, double weight, double washingCycleLength, double consumedEnergyForOneHour);

    double  consumedElectricity() override;

    std::string toString() override ;
};
