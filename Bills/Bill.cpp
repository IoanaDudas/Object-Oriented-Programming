
#include "Bill.h"

Bill::Bill(string companyName, string code, float sum, bool isPaid)
{
    this->companyName = companyName;
    this->code = code;
    this->sum = sum;
    this->isPaid = isPaid;
}

string Bill::getCompanyName()
{
    return this->companyName;
}

string Bill::getCode()
{
    return this->code;
}

float Bill::getSum()
{
    return this->sum;
}

bool Bill::getIsPaid()
{
    return this->isPaid;
}

string Bill::toString()
{
    return this->getCompanyName() + "; " + to_string(this->sum);
}