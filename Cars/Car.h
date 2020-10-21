#pragma once
#include <iostream>

using namespace std;

class Car {
private:
    string manufacturerName;
    string model;
    int year;
    string color;

public:
    Car(string manufacturerName, string model, int year, string color);

    string getManufacturerName();

    string getModel();

    int getYear();

    string getColor();

    string toString();
};

