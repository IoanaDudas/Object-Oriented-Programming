#pragma once
#include <string>
#include "Building.h"
#include "Block.h"
#include "House.h"
#include <vector>
#include <fstream>
#include <iostream>

typedef Building* TElem;

using namespace std;

class Controller {
private:
    vector<TElem> buildingsList;
public:



    /*
		Adds a building to the controller.
		Input: building (Building*)
	*/
    void addBuilding(Building* building);

    vector<TElem> getAllBuildings();

    vector<TElem> getAllSortedBuildings();

    vector<TElem> getAllToBeRestored();

    vector<TElem> getAllToBeDemolished();

    void writeToFile(string filename, vector<TElem> buildings);

    ~Controller();
};

