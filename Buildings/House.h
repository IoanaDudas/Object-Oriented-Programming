#pragma once

#include "Building.h"

class House : public Building{
private:
    string type;
    bool isHistorical;
public:

    House(string address, int constructionYear, string typeOfHouse, bool historical);

    bool mustBeRestored() override ;

    bool canBeDemolished() override ;

    std::string toString() override ;
};
