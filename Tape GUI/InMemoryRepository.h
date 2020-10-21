#pragma once

#include "Tape.h"
#include "Repository.h"
typedef Tape TElem;
#include <iostream>
#include <fstream>
#include "Exceptions.h"

using namespace std;

class InMemoryRepository : public Repository
{

private:
    std::vector<TElem> tapeList;
    int indexTapeList;
public:
    //default constructor or initializes an object of type repository
    InMemoryRepository();

    //adds a tape to the repository
    bool addTape(const Tape& tape) override;

    //removes a tape by title from the repository
    bool removeTape(const std::string& title) override;

    //updates the data of a tape from the repository
    bool updateTape(const Tape& tape) override;

    TElem nextRepository() override ;

    //returns the current length of the repository
    int getLength() override ;

    //returns a Vector containing all the tapes
    std::vector<TElem> getAllTapes() const override ;

    void setFilename(string filename) override {}
};
