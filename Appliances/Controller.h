#pragma once
#include <string>
#include "Appliance.h"
#include "DishWasher.h"
#include "Refrigerator.h"
#include <vector>
#include <fstream>
#include <iostream>

typedef Appliance* TElem;

using namespace std;

class Controller {
private:
    vector<TElem> applianceList;
public:
    Controller(){};

    /*
		Adds a appliance to the controller.
		Input: appliance (Appliance*)
	*/
    void addAppliance(Appliance* appliance);

    vector<TElem> getAllAppliances();

    vector<TElem> getAllSortedAppliances();

    vector<TElem> getAllWithConsumedElectricityLessThan(double maxElectricity);

    void writeToFile(string filename, vector<TElem> appliances);

    ~Controller();
};

