
#include "Building.h"

std::string Building::toString()
{
    return this->address + ", " + to_string(this->constructionYear);
}

void Building::setAddress(string address)
{
    this->address = address;
}

std::string Building::getAddress()
{
    return this->address;
}

void Building::setConstructionYear(int year)
{
    this->constructionYear = year;
}

int Building::getConstructionYear()
{
    return this->constructionYear;
}