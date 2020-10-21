
#include "DishWasher.h"

DishWasher::DishWasher(string id, double weight, double washingCycleLength, double consumedEnergyForOneHour)
{
    this->setId(id);
    this->setWeight(weight);
    this->washingCycleLength = washingCycleLength;
    this->consumedEnergyForOneHour = consumedEnergyForOneHour;
}

double DishWasher::consumedElectricity()
{
    return this->washingCycleLength * this->consumedEnergyForOneHour * 8;
}

std::string DishWasher::toString()
{
    return this->getId() + ", " + to_string(this->getWeight()) + ", " +
           to_string(this->washingCycleLength) + ", " + to_string(this->consumedEnergyForOneHour) + "\n";
}