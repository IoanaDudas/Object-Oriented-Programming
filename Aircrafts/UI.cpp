
#include "UI.h"
#include <string>
#include <vector>
#include <fstream>

using namespace std;


void UI::printMenu()
{
    cout << endl;
    cout << "- add id, helicopter, privacy\n";
    cout << "- add id, plane, privacy, wings\n";
    cout << "- add id, hot air balloon, weightLimit\n";
    cout << "- list givenAltitude/activity\n";
    cout << "- list\n";
    cout << "- exit\n";
}

void UI::splitCommandArguments(const std::string userCommand, std::string &id, std::string &model, std::string &privacy, std::string &wings, std::string &weightLimit)
{
    int indexBeginning = 0, indexEnding, size;

    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;

    //id
    indexEnding = indexBeginning;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding-indexBeginning;
    id = userCommand.substr(indexBeginning,size);

    //model
    indexEnding += 2;
    indexBeginning = indexEnding;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    model = userCommand.substr(indexBeginning, size);

    if(model == "helicopter")
    {
        indexEnding += 2;
        indexBeginning = indexEnding;
        indexEnding = userCommand.length();
        size = indexEnding - indexBeginning;
        privacy = userCommand.substr(indexBeginning, size);
        wings = "";
        weightLimit = "";
    }
    if(model == "plane")
    {
        //accessCount
        indexEnding += 2;
        indexBeginning = indexEnding;
        while (userCommand[indexEnding] != ',')
            indexEnding++;
        size = indexEnding - indexBeginning;
        privacy = userCommand.substr(indexBeginning, size);

        //footagePreview
        indexEnding += 2;
        indexBeginning = indexEnding;
        indexEnding = userCommand.length();
        size = indexEnding - indexBeginning;
        wings = userCommand.substr(indexBeginning, size);
        weightLimit = "";
    }
    if(model == "hot air balloon")
    {
        indexEnding += 2;
        indexBeginning = indexEnding;
        indexEnding = userCommand.length();
        size = indexEnding - indexBeginning;
        weightLimit = userCommand.substr(indexBeginning, size);
        wings = "";
        privacy = "";
    }
}

void UI::addAircraftUI(const std::string userCommand)
{
    std::string id, model, privacy, wings, weightLimit;
    splitCommandArguments(userCommand, id, model, privacy, wings, weightLimit);

    if (this->service.addAircraftService(id, model, privacy, wings, weightLimit) == false)
        cout << "Invalid input!"<<endl;
}

void UI::listAircraftUI()
{
    std::vector<TElem> aircraftList = this->service.getAllTAircraftService();
    for (auto current : aircraftList)
    {
        cout << current->toString() << endl;
    }
}

void UI::listAircraftParameterUI(const std::string userCommand)
{
    int indexBeginning = 0, indexEnding, size;

    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;

    indexEnding = userCommand.length();
    size = indexEnding - indexBeginning;
    std::string parameter = userCommand.substr(indexBeginning, size);

    if(isNumber(parameter))
    {
        int altitude = stoi(parameter);

        std::vector<TElem> aircraftList = this->service.getAllTAircraftService();
        for (auto current : aircraftList)
        {
            if(current->getMaximumAltitude() >= altitude)
                cout << current->toString() << endl;
        }
    }
    else
    {
        std::string typeOfActivity = parameter;

        std::string filename = parameter + ".txt";
        fstream inFile;
        inFile.open(filename, ios::app);

        std::vector<TElem> aircraftList = this->service.getAllTAircraftService();
        for (auto current : aircraftList)
        {
            for (auto index : current->getActivities())
                if(index == typeOfActivity)
                {
                    inFile << current->toString() << endl;
                    cout << current->toString() << endl;
                }
        }
        string app = "open -a 'TextEdit' " + filename;
        inFile.close();
        system(app.c_str());
    }

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
            addAircraftUI(userCommand);
        }
        if (userCommand=="list")
        {
            listAircraftUI();
        }
        else if (userCommand.find("list") == 0)
        {
            listAircraftParameterUI(userCommand);
        }
        if (userCommand.find("exit") == 0)
        {
            return;
        }
    }
}