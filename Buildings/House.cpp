
#include "House.h"


House::House(string address, int constructionYear, string typeOfHouse, bool historical)
{
    this->setAddress(address);
    this->setConstructionYear(constructionYear);
    this->type = typeOfHouse;
    this->isHistorical = historical;
}

bool House::canBeDemolished()
{
    return !this->isHistorical;
}

bool House::mustBeRestored()
{
    return 2020 - this->getConstructionYear() > 100;
}

std::string House::toString()
{
    string historical;
    if(this->isHistorical)
        historical = "isHistorical";
    else
        historical = "isNotHistorical";
    return this->getAddress() + ", " + to_string(this->getConstructionYear()) + ", " +
            this->type + ", " + historical + "\n";
}