#pragma once

#include "Aircraft.h"
#include "Helicopter.h"
#include "Plane.h"
#include "HotAirBalloon.h"
#include <iostream>
#include <fstream>
typedef Aircraft* TElem;

using namespace std;

class Repository
{

private:
    std::vector<TElem> aircraftList;
public:
    //default constructor or initializes an object of type repository
    Repository() {};

    //adds a aircraft to the repository
    bool addAircraft(Aircraft* aircraft);

    //returns a Vector containing all the aircraft
    std::vector<TElem> getAllAircraft() const ;

    ~Repository();
};
