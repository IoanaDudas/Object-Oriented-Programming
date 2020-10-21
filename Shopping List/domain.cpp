
#include "domain.h"

domain::domain(string category, string name, int quantity)
{
    this->category = category;
    this->name = name;
    this->quantity = quantity;
}

string domain::getCategory()
{
    return this->category;
}

string domain::getName()
{
    return this->name;
}

int domain::getQuantity()
{
    return this->quantity;
}

string domain::toString()
{
    return this->category + " | " + this->name + " | " + to_string(this->quantity);
}