
#include "Helicopter.h"

Helicopter::Helicopter(int id, string privacy)
{
    this->setMaximumAltitude(12);
    this->setIsPrivate(privacy);
    this->setId(id);
    this->setModel("helicopter");
    this->newActivity("military");
    this->newActivity("medical emergencies");
    this->newActivity("public transportation");
    if(this->getIsPrivate() == "private")
    {
        this->newActivity("leisure time");
    }
}

string Helicopter::getIsPrivate() const
{
    return this->isPrivate;
}

void Helicopter::setIsPrivate(string privacy)
{
    this->isPrivate = privacy;
}

std::string Helicopter::toString()
{
    string stringToReturn = std::to_string(this->getId()) + ", " + this->getModel() + ", ";

    for (int index = 0; index < this->getActivities().size(); ++index)
    {
        stringToReturn += getActivities().at(index) + ", ";
    }
    stringToReturn += std::to_string(this->getMaximumAltitude()) + ", " + this->getIsPrivate();

    return stringToReturn;
}
