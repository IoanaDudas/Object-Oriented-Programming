
#include "Plane.h"

Plane::Plane(int id, string privacy, string wings)
{
    this->setMaximumAltitude(26);
    this->setIsPrivate(privacy);
    this->setId(id);
    this->setMainWings(wings);
    this->setModel("plane");
    this->newActivity("military");
    this->newActivity("public transportation");
    if(this->getMainWings() == "biplane")
    {
        this->newActivity("leisure time");
    }
}

string Plane::getIsPrivate() const
{
    return this->isPrivate;
}

void Plane::setIsPrivate(string privacy)
{
    this->isPrivate = privacy;
}

void Plane::setMainWings(string wings)
{
    this->wings = wings;
}

string Plane::getMainWings() const
{
    return this->wings;
}

std::string Plane::toString()
{
    string stringToReturn = std::to_string(this->getId()) + ", " + this->getModel() + ", ";

    for (int index = 0; index < this->getActivities().size(); ++index)
    {
        stringToReturn += getActivities().at(index) + ", ";
    }
    stringToReturn += std::to_string(this->getMaximumAltitude()) + ", " + this->getIsPrivate() + ", " + this->getMainWings();

    return stringToReturn;
}