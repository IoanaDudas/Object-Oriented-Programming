
#include "BMI.h"

BMI::BMI(double value, string date)
{
    this->setDate(date);
    this->value = value;
}

bool BMI::isResultOK()
{
    return this->value > 18.5 && this->value < 25;
}

std::string BMI::toString()
{
    return "BMI, " + this->getDate() + ", " + to_string(this->value) + "\n";
}