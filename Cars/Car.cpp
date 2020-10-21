
#include "Car.h"

Car::Car(string manufacturerName, string model, int year, string color)
{
    this->manufacturerName = manufacturerName;
    this->model = model;
    this->year = year;
    this->color = color;
}

string Car::getManufacturerName()
{
    return this->manufacturerName;
}

string Car::getModel()
{
    return this->model;
}

int Car::getYear()
{
    return this->year;
}

string Car::getColor()
{
    return this->color;
}

string Car::toString()
{
    return this->manufacturerName + " | " + this->model;
}