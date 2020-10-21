#pragma once

#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include "Car.h"

using namespace std;

typedef Car TElem;

class Service {

private:
    string filename;

public:
    Service(){}

    void setFilename(string filename);

    std::vector<TElem> getAllItems() const;

    std::vector<TElem> getAllItemsSorted() const;

    /*
	Description:
		- function that returns the total number of cars of a manufacturer
	Input:
		- manufacturerName: string for the manufacturer name
	Output:
		- total: int representing the total number of that manufacturer's cars
	*/
    int numberOfCars(string &manufacturerName);
};


