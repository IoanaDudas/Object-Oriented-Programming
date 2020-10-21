#pragma once

#include "Controller.h"

class UI
{
private:
    Controller controller;
public:

    UI(const Controller& buildingController) : controller(buildingController) {}

    void run();

private:

    void printMenu();

    void splitCommandArguments(const std::string userCommand, std::string &id, std::string &weight, std::string &firstParameter, std::string &secondParameter);

    void addApplianceUI(const std::string userCommand);

    void listAppliancesUI();

    /*
		Sorts the list of all appliances by their weights
		Input: -none
		Output: -prints the sorted list
		The sorting is done using the std:sort function
	*/
    void listSortedAppliancesUI();

    void writeToFileUI(const std::string userCommand);

private:
    //checks to see if a given std::string is a number
    bool isNumber(const std::string& string);

};