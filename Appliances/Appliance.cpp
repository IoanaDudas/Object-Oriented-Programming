
#include "Appliance.h"

std::string Appliance::toString()
{
    return this->id + ", " + to_string(this->weight);
}

void Appliance::setId(string id)
{
    this->id = id;
}

std::string Appliance::getId()
{
    return this->id;
}

void Appliance::setWeight(double weight)
{
    this->weight = weight;
}

double Appliance::getWeight()
{
    return this->weight;
}