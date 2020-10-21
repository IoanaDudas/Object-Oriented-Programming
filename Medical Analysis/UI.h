#pragma once

#include "Person.h"

class UI
{
private:
    Person person;
public:

    UI(const Person& analysisPerson) : person(analysisPerson) {}

    void run();

private:

    void printMenu();

    void splitCommandArgumentsWrite(const std::string userCommand, std::string &filename, std::string &startDate, std::string &endDate);

    void splitCommandArguments(const std::string userCommand, std::string &typeOfAnalysis, std::string &date);

    void BMIvalue(const std::string userCommand, double &BMIvalue);

    void BPvalue(const std::string userCommand, int &systolicValue, int &diastolicValue);

    void addAnalysisUI(const std::string userCommand);

    void listAnalysesUI();

    void personIsIllUI(const std::string userCommand);

    void writeToFileUI(const std::string userCommand);

private:
    //checks to see if a given std::string is a number
    bool isNumber(const std::string& string);

};