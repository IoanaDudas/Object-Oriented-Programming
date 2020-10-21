#pragma once
#include <vector>
#include "Tape.h"
typedef Tape TElem;
#include "RepositoryHelper.h"
#include <iostream>
#include <fstream>
#include "Exceptions.h"

class CSVRepositoryHelper : public RepositoryHelper
{
private:
    string filename;
public:
    //default constructor or initializes an object of type repository helper
    CSVRepositoryHelper(){};

    bool saveTape(const Tape& tape) override;

    std::vector<TElem> getAllHelperTapes() const override;

    void setFilename(string filename) override;
};