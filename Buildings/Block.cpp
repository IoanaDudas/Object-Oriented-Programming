
#include "Block.h"

Block::Block(string address, int constructionYear, int numberOfApartments, int numberOfOccupiedApartments)
{
    this->setAddress(address);
    this->setConstructionYear(constructionYear);
    this->totalApartments = numberOfApartments;
    this->occupiedApartments = numberOfOccupiedApartments;
}

bool Block::canBeDemolished()
{
    return this->occupiedApartments < this->totalApartments * 0.05;
}

bool Block::mustBeRestored()
{
    if(2020 - this->getConstructionYear() > 40)
        if(this->occupiedApartments > this->totalApartments * 0.8)
            return true;
    return false;
}

std::string Block::toString()
{
    return this->getAddress() + ", " + to_string(this->getConstructionYear()) + ", " +
        to_string(this->totalApartments) + ", " + to_string(this->occupiedApartments) + "\n";
}