
#include "Refrigerator.h"

Refrigerator::Refrigerator(string id, double weight, string electricityUsageClass, bool hasFreezer)
{
    this->setId(id);
    this->setWeight(weight);
    this->electricityUsageClass = electricityUsageClass;
    this->hasFreezer = hasFreezer;
}

double Refrigerator::consumedElectricity()
{
    double electricity = 0;
    if (this->hasFreezer)
        electricity += 20;
    if (this->electricityUsageClass == "A")
        return electricity + 3 * 20;
    if (this->electricityUsageClass == "A+")
        return electricity + 2.5 * 20;
    if (this->electricityUsageClass == "A++")
        return electricity + 2 * 20;
}

std::string Refrigerator::toString()
{
    std::string freezer;
    if(this->hasFreezer)
        freezer = "withFreezer";
    else
        freezer = "withoutFreezer";
    return this->getId() + ", " + to_string(this->getWeight()) + ", " +
            this->electricityUsageClass + ", " + freezer + "\n";
}