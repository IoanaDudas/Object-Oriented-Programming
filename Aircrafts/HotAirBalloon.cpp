
#include "HotAirBalloon.h"

HotAirBalloon::HotAirBalloon(int id, int weight)
{
    this->setMaximumAltitude(21);
    this->setWeightLimit(weight);
    this->setId(id);
    this->setModel("hot air balloon");
    this->newActivity("leisure time");
}

int HotAirBalloon::getWeightLimit() const
{
    return this->weightLimit;
}

void HotAirBalloon::setWeightLimit(int weight)
{
    this->weightLimit = weight;
}

std::string HotAirBalloon::toString()
{
    string stringToReturn = std::to_string(this->getId()) + ", " + this->getModel() + ", ";

    for (int index = 0; index < this->getActivities().size(); ++index)
    {
        stringToReturn += getActivities().at(index) + ", ";
    }
    stringToReturn += std::to_string(this->getMaximumAltitude()) + ", " + std::to_string(this->getWeightLimit());

    return stringToReturn;
}