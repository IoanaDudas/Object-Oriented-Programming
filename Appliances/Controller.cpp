
#include "Controller.h"
bool myFunction(Appliance* a1, Appliance* a2) { return (a1->getWeight() < a2->getWeight()); }

void Controller::addAppliance(Appliance *appliance)
{
    bool applianceInList = 0;
    for (auto current : this->applianceList)
        if(current->getId() == appliance->getId())
            applianceInList = 1;
    if(applianceInList == 0)
        this->applianceList.push_back(appliance);
}


vector<TElem> Controller::getAllAppliances()
{
    return this->applianceList;
}


vector<TElem> Controller::getAllSortedAppliances()
{
    vector<TElem> newVector = this->applianceList;
    std::sort(newVector.begin(), newVector.end(), myFunction);
    return newVector;
}


vector<TElem> Controller::getAllWithConsumedElectricityLessThan(double maxElectricity)
{
    vector<TElem> newVector;
    for (auto current : this->applianceList)
    {
        if(current->consumedElectricity() <= maxElectricity)
            newVector.push_back(current);
    }
    return newVector;
}


void Controller::writeToFile(string filename, vector<TElem> appliances)
{
    fstream inFile;
    inFile.open(filename, ios::app);
    for (auto current : appliances)
        inFile << current->toString();

    string app = "open -a 'TextEdit' " + filename;
    inFile.close();
    system(app.c_str());
}


Controller::~Controller()
{
    for (auto current : this->applianceList)
    {
        delete current;
    }
}