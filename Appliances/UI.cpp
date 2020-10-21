
#include "UI.h"
#include <string>
#include <vector>
#include <fstream>

using namespace std;


void UI::printMenu()
{
    cout << endl;
    cout << "Refrigerator\n";
    cout << "- add id, weight, electricityUsageClass, hasFreezer\n";
    cout << "DishWasher\n";
    cout << "- add id, weight, washingCycleLength, consumedEnergyForOneHour\n";
    cout << "- list\n";
    cout << "- list sorted\n";
    cout << "- writeToFile maxWeight\n";
    cout << "- exit\n";
}

void UI::splitCommandArguments(const std::string userCommand, std::string &id, std::string &weight, std::string &firstParameter, std::string &secondParameter)
{
    int indexBeginning = 0, indexEnding, size;

    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;

    // address
    indexEnding = indexBeginning;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding-indexBeginning;
    id = userCommand.substr(indexBeginning,size);

    // constructionYear
    indexEnding += 2;
    indexBeginning = indexEnding;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    weight = userCommand.substr(indexBeginning, size);

    // electricityUsageClass or washingCycleLength
    indexEnding += 2;
    indexBeginning = indexEnding;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    firstParameter = userCommand.substr(indexBeginning, size);

    // hasFreezer or consumedEnergyForOneHour
    indexEnding += 2;
    indexBeginning = indexEnding;
    indexEnding = userCommand.length();
    size = indexEnding - indexBeginning;
    secondParameter = userCommand.substr(indexBeginning, size);
}

void UI::addApplianceUI(const std::string userCommand)
{
    std::string id, weight, firstParameter, secondParameter;
    splitCommandArguments(userCommand, id, weight, firstParameter, secondParameter);
    int weightInt = stod(weight);
    if(isNumber(firstParameter) and isNumber(secondParameter))
    {
        double washingCycleLength, consumedEnergyForOneHour;
        washingCycleLength = stod(firstParameter);
        consumedEnergyForOneHour = stod(secondParameter);
        DishWasher * appliance = new DishWasher(id, weightInt, washingCycleLength, consumedEnergyForOneHour);
        this->controller.addAppliance(appliance);
    }
    else if(!isNumber(firstParameter) and isNumber(secondParameter))
    {
        string electricityUsageClass;
        bool hasFreezer;
        electricityUsageClass = firstParameter;
        hasFreezer = stoi(secondParameter);
        Refrigerator * appliance = new Refrigerator(id, weightInt, electricityUsageClass, hasFreezer);
        this->controller.addAppliance(appliance);
    }
    else cout << "Invalid input!"<< endl;
}

void UI::listAppliancesUI()
{
    std::vector<TElem> appliancesList = this->controller.getAllAppliances();
    for (auto current : appliancesList)
    {
        cout << current->toString();
    }
}

void UI::listSortedAppliancesUI()
{
    std::vector<TElem> appliancesList = this->controller.getAllSortedAppliances();
    for (auto current : appliancesList)
    {
        cout << current->toString();
    }
}

void UI::writeToFileUI(const std::string userCommand)
{
    int indexBeginning = 0, size = userCommand.size();
    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;
    double maxWeight = stod(userCommand.substr(indexBeginning,size));

    this->controller.writeToFile("appliances.txt", this->controller.getAllWithConsumedElectricityLessThan(maxWeight));
}

bool UI::isNumber(const std::string& string)
{
    std::string::const_iterator stringIterator = string.begin();
    while (stringIterator != string.end() && (std::isdigit(*stringIterator) || *stringIterator=='.'))
        ++stringIterator;
    if (!string.empty() && stringIterator == string.end())
        return true;
    return false;
}

void UI::run()
{
    printMenu();

    while (true)
    {
        std::string userCommand;
        std::cout<<"->";
        std::getline(std::cin, userCommand);

        if (userCommand.find("add") == 0)
        {
            addApplianceUI(userCommand);
        }
        if (userCommand=="list")
        {
            listAppliancesUI();
        }
        if (userCommand.find("list sorted") == 0)
        {
            listSortedAppliancesUI();
        }
        if (userCommand.find("writeToFile") == 0)
        {
            writeToFileUI(userCommand);
        }
        if (userCommand.find("exit") == 0)
        {
            return;
        }
    }
}