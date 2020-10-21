#pragma once

#include "Service.h"

class UI
{
private:
    Service service;
public:

    UI(const Service& tapeService) : service(tapeService) {}

    void run();

private:

    void printMenu();

    void splitCommandArguments(const std::string userCommand, std::string &id, std::string &model, std::string &privacy, std::string &wings, std::string &weightLimit);

    void addAircraftUI(const std::string userCommand);

    void listAircraftUI();

    void listAircraftParameterUI(const std::string userCommand);

private:
    //checks to see if a given std::string is a number
    bool isNumber(const std::string& string);

};