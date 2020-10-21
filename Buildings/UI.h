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

    void splitCommandArguments(const std::string userCommand, std::string &address, std::string &constructionYear, std::string &firstParameter, std::string &secondParameter);

    void addBuildingUI(const std::string userCommand);

    void listBuildingsUI();

    /*
		Sorts the list of all buildings by their construction year
		Input: -none
		Output: -prints the sorted list
		The sorting is done using the std:sort function
	*/
    void listSortedBuildingsUI();

    void writeToFileUI();

private:
    //checks to see if a given std::string is a number
    bool isNumber(const std::string& string);

};