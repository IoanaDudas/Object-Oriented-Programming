
#include "UI.h"
#include <string>
#include <vector>
#include <fstream>

using namespace std;


void UI::printMenu()
{
    cout << endl;
    cout << "Block\n";
    cout << "- add address, constructionYear, totalApartments, occupiedApartments\n";
    cout << "House\n";
    cout << "- add address, constructionYear, type, isHistorical\n";
    cout << "- list\n";
    cout << "- list sorted\n";
    cout << "- writeToFile\n";
    cout << "- exit\n";
}

void UI::splitCommandArguments(const std::string userCommand, std::string &address, std::string &constructionYear, std::string &firstParameter, std::string &secondParameter)
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
    address = userCommand.substr(indexBeginning,size);

    // constructionYear
    indexEnding += 2;
    indexBeginning = indexEnding;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    constructionYear = userCommand.substr(indexBeginning, size);

    // totalApartments or type
    indexEnding += 2;
    indexBeginning = indexEnding;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    firstParameter = userCommand.substr(indexBeginning, size);

    // occupiedApartments or isHistorical
    indexEnding += 2;
    indexBeginning = indexEnding;
    indexEnding = userCommand.length();
    size = indexEnding - indexBeginning;
    secondParameter = userCommand.substr(indexBeginning, size);
}

void UI::addBuildingUI(const std::string userCommand)
{
    std::string address, constructionYear, firstParameter, secondParameter;
    splitCommandArguments(userCommand, address, constructionYear, firstParameter, secondParameter);
    int year = stoi(constructionYear);
    if(isNumber(firstParameter) and isNumber(secondParameter))
    {
        int occupiedApartments, totalApartments;
        totalApartments = stoi(firstParameter);
        occupiedApartments = stoi(secondParameter);
        Block * building = new Block(address, year, totalApartments, occupiedApartments);
        this->controller.addBuilding(building);
    }
    else if(!isNumber(firstParameter) and isNumber(secondParameter))
    {
        string type;
        bool isHistorical;
        type = firstParameter;
        isHistorical = stoi(secondParameter);
        House * building = new House(address, year, type, isHistorical);
        this->controller.addBuilding(building);
    }
    else cout << "Invalid input!"<< endl;
}

void UI::listBuildingsUI()
{
    std::vector<TElem> buildingsList = this->controller.getAllBuildings();
    for (auto current : buildingsList)
    {
        cout << current->toString();
    }
}

void UI::listSortedBuildingsUI()
{
    std::vector<TElem> buildingsList = this->controller.getAllSortedBuildings();
    for (auto current : buildingsList)
    {
        cout << current->toString();
    }
}

void UI::writeToFileUI()
{
    this->controller.writeToFile("demolished.txt", this->controller.getAllToBeDemolished());
    this->controller.writeToFile("restored.txt", this->controller.getAllToBeRestored());
}

bool UI::isNumber(const std::string& string)
{
    std::string::const_iterator stringIterator = string.begin();
    while (stringIterator != string.end() && std::isdigit(*stringIterator))
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
            addBuildingUI(userCommand);
        }
        if (userCommand=="list")
        {
            listBuildingsUI();
        }
        if (userCommand.find("list sorted") == 0)
        {
            listSortedBuildingsUI();
        }
        if (userCommand.find("writeToFile") == 0)
        {
            writeToFileUI();
        }
        if (userCommand.find("exit") == 0)
        {
            return;
        }
    }
}