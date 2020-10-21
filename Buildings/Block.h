#pragma once

#include "Building.h"

class Block : public Building{
private:
    int totalApartments;
    int occupiedApartments;
public:

    Block(string address, int constructionYear, int numberOfApartments, int numberOfOccupiedApartments);

    bool mustBeRestored() override ;

    bool canBeDemolished() override ;

    std::string toString() override ;
};
