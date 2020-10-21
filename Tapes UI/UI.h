#pragma once

#include "Service.h"

class UI
{
private:
    Service service;
    int mode;
public:

    UI(const Service& tapeService) : service(tapeService) { this->mode = -1; }

    void run();

private:

    void printMenu();

    void splitCommandArguments(const std::string userCommand, std::string &title, std::string &filmedAt, std::string &day, std::string &month, std::string &year, std::string &accessCount, std::string &footagePreview);

    void addTapeUI(const std::string userCommand);

    void updateTapeUI(const std::string userCommand);

    void removeTapeUI(const std::string userCommand);

    void listTapesUI();

    void nextUI(int& currentIndex, std::vector<TElem> tapeListModeB);

    void saveUI(const std::string userCommand, std::vector<TElem> tapeListModeB);

    void listModeBUI(const std::string userCommand, std::vector<TElem> tapeListModeB);

    void mylistUI();

    void setRepositoryFilenameUI(string filename);

    void setRepositoryHelperFilenameUI(string filename);

    void pathRepositoryUI();

    void pathRepositoryHelperUI();
};