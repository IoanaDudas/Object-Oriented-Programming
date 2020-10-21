
#include "BP.h"

BP::BP(int systolicValue, int diastolicValue, string date)
{
    this->setDate(date);
    this->systolicValue = systolicValue;
    this->diastolicValue = diastolicValue;
}

bool BP::isResultOK()
{
    if(this->systolicValue >= 90 and this->systolicValue <= 119)
        if(this->diastolicValue >= 60 and this->diastolicValue <= 79)
            return true;
    return false;
}

std::string BP::toString()
{
    return "BP, " + this->getDate() + ", " + to_string(this->systolicValue) + ", " + to_string(this->diastolicValue) + "\n";
}