
#include "Controller.h"

bool myFunction(Building* firstBuilding, Building* secondBuilding)
{
    return firstBuilding->getConstructionYear() < secondBuilding->getConstructionYear();
}

void Controller::addBuilding(Building *building)
{
    bool buildingInList = 0;
    for (auto current : this->buildingsList)
        if(current->getAddress() == building->getAddress())
            buildingInList = 1;
    if(buildingInList == 0)
        this->buildingsList.push_back(building);
}

vector<TElem> Controller::getAllBuildings()
{
    return this->buildingsList;
}

vector<TElem> Controller::getAllSortedBuildings()
{
    vector<TElem> newVector = this->buildingsList;
    std::sort(newVector.begin(), newVector.end(), myFunction);
    return newVector;
}

vector<TElem> Controller::getAllToBeDemolished()
{
    vector<TElem> newVector;
    for (auto current : this->buildingsList)
    {
        if(current->canBeDemolished() == true)
            newVector.push_back(current);
    }
    return newVector;
}

vector<TElem> Controller::getAllToBeRestored()
{
    vector<TElem> newVector;
    for (auto current : this->buildingsList)
    {
        if(current->mustBeRestored() == true)
            newVector.push_back(current);
    }
    return newVector;
}


void Controller::writeToFile(string filename, vector<TElem> buildings)
{
    fstream inFile;
    inFile.open(filename, ios::app);
    for (auto current : buildings)
        inFile << current->toString();

    string app = "open -a 'TextEdit' " + filename;
    inFile.close();
    system(app.c_str());
}

Controller::~Controller()
{
    for (auto current : this->buildingsList)
    {
        delete current;
    }
}