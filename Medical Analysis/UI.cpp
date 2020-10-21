
#include "UI.h"
#include <string>
#include <vector>
#include <fstream>

using namespace std;


void UI::printMenu()
{
    cout << endl;
    cout << "- add typeOfAnalysis, date\n";
    cout << "   if BMI - value\n";
    cout << "   if BP - systolicValue, diastolicValue\n";
    cout << "- list\n";
    cout << "- ill month\n";
    cout << "- write filename, startDate, endDate\n";
    cout << "- exit\n";
}

void UI::splitCommandArgumentsWrite(const std::string userCommand, std::string &filename, std::string &startDate, std::string &endDate)
{
    int indexBeginning = 0, indexEnding, size;

    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;

    // filename
    indexEnding = indexBeginning;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding-indexBeginning;
    filename = userCommand.substr(indexBeginning,size);

    // startDate
    indexEnding += 2;
    indexBeginning = indexEnding;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding - indexBeginning;
    startDate = userCommand.substr(indexBeginning, size);

    // endDate
    indexEnding += 2;
    indexBeginning = indexEnding;
    indexEnding = userCommand.length();
    size = indexEnding - indexBeginning;
    endDate = userCommand.substr(indexBeginning, size);
}

void UI::splitCommandArguments(const std::string userCommand, std::string &typeOfAnalysis, std::string &date)
{
    int indexBeginning = 0, indexEnding, size;

    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;

    // typeOfAnalysis
    indexEnding = indexBeginning;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding-indexBeginning;
    typeOfAnalysis = userCommand.substr(indexBeginning,size);

    //date
    indexEnding += 2;
    indexBeginning = indexEnding;
    indexEnding = userCommand.length();
    size = indexEnding - indexBeginning;
    date = userCommand.substr(indexBeginning, size);
}

void UI::BMIvalue(const std::string userCommand, double &BMIValue)
{
    BMIValue = stod(userCommand);
}

void UI::BPvalue(const std::string userCommand, int &systolicValue, int &diastolicValue)
{
    int indexBeginning = 0, indexEnding, size;

    // systolicValue
    indexEnding = indexBeginning;
    while (userCommand[indexEnding] != ',')
        indexEnding++;
    size = indexEnding-indexBeginning;
    systolicValue = stoi(userCommand.substr(indexBeginning,size));

    //diastolicValue
    indexEnding += 2;
    indexBeginning = indexEnding;
    indexEnding = userCommand.length();
    size = indexEnding - indexBeginning;
    diastolicValue = stoi(userCommand.substr(indexBeginning, size));
}

void UI::addAnalysisUI(const std::string userCommand)
{
    std::string typeOfAnalysis, date;
    splitCommandArguments(userCommand, typeOfAnalysis, date);
    if(typeOfAnalysis == "BMI")
    {
        std::string userCommandAnalysis;
        double BMIValue;
        std::cout<<"->";
        std::getline(std::cin, userCommandAnalysis);
        BMIvalue(userCommandAnalysis, BMIValue);
        BMI * analysis = new BMI(BMIValue, date);
        this->person.addMedicalAnalysis(analysis);
    }
    else if(typeOfAnalysis == "BP")
    {
        std::string userCommandAnalysis;
        int systolicValue, diastolicValue;
        std::cout<<"->";
        std::getline(std::cin, userCommandAnalysis);
        BPvalue(userCommandAnalysis, systolicValue, diastolicValue);
        BP * analysis = new BP(systolicValue, diastolicValue, date);
        this->person.addMedicalAnalysis(analysis);
    }
    else cout << "Invalid input!"<< endl;
}

void UI::listAnalysesUI()
{
    std::vector<TElem> analysesList = this->person.getAllAnalysis();
    for (auto current : analysesList)
    {
        cout << current->toString();
    }
}

void UI::personIsIllUI(const std::string userCommand)
{
    int month;
    int indexBeginning = 0, size;
    while (userCommand[indexBeginning] != ' ')
        indexBeginning++;
    indexBeginning++;
    size = userCommand.size();
    month = stoi(userCommand.substr(indexBeginning, size));
    if(!this->person.isIll(month))
        cout << "Person is not ill!\n";
    else cout << "Person is ill!\n";
}

void UI::writeToFileUI(const std::string userCommand)
{
    string filename, startDate, endDate;
    splitCommandArgumentsWrite(userCommand, filename, startDate, endDate);
    this->person.writeToFile(filename, startDate, endDate);
}

void UI::run()
{
    printMenu();
    BMI * analysis1 = new BMI(19.0, "2000.04.03");
    BMI * analysis2 = new BMI(17.0, "2008.08.07");
    BP * analysis3 = new BP(121, 66, "2017.11.08");
    BP * analysis4 = new BP(110, 71, "2010.04.09");
    this->person.addMedicalAnalysis(analysis1);
    this->person.addMedicalAnalysis(analysis2);
    this->person.addMedicalAnalysis(analysis3);
    this->person.addMedicalAnalysis(analysis4);

    while (true)
    {
        std::string userCommand;
        std::cout<<"->";
        std::getline(std::cin, userCommand);

        if (userCommand.find("add") == 0)
        {
            addAnalysisUI(userCommand);
        }
        if (userCommand=="list")
        {
            listAnalysesUI();
        }
        if (userCommand.find("ill") == 0)
        {
            personIsIllUI(userCommand);
        }
        if (userCommand.find("write") == 0)
        {
            writeToFileUI(userCommand);
        }
        if (userCommand.find("exit") == 0)
        {
            return;
        }
    }
}