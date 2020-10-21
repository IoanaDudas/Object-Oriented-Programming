#pragma once

#include "Tape.h"
//#include "DynamicVector.h"
typedef Tape TElem;
#include <vector>

class Repository
{
private:
public:

    //adds a tape to the repository
    virtual bool addTape(const Tape& tape) = 0;

    //removes a tape by title from the repository
    virtual bool removeTape(const std::string& title) = 0;

    //updates the data of a tape from the repository
    virtual bool updateTape(const Tape& tape) = 0;

    virtual TElem nextRepository() = 0;

    //returns the current length of the repository
    virtual int getLength() = 0;

    //returns a Dynamic Vector containing all the tapes
    virtual std::vector<TElem> getAllTapes() const = 0;

    virtual void setFilename(string filename) = 0;
};