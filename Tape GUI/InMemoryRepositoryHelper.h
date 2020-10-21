#pragma once
#include <vector>
#include "Tape.h"
typedef Tape TElem;
#include "RepositoryHelper.h"
#include "Exceptions.h"

class InMemoryRepositoryHelper : public RepositoryHelper
{
private:
    std::vector<TElem> tapeListHelper;
public:
    //default constructor or initializes an object of type repository helper
    InMemoryRepositoryHelper() {};

    bool saveTape(const Tape& tape) override;

    std::vector<TElem> getAllHelperTapes() const override;

    void setFilename(string filename) override {}

    void open() override {}
};