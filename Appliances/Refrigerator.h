#pragma once

#include "Appliance.h"

class Refrigerator : public Appliance{
private:
    string electricityUsageClass;
    bool hasFreezer;
public:

    Refrigerator(string id, double weight, string electricityUsageClass, bool hasFreezer);

    double consumedElectricity() override;

    std::string toString() override ;
};
