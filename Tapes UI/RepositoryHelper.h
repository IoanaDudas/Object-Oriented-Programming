#pragma once
#include <vector>
#include "Tape.h"
typedef Tape TElem;


class RepositoryHelper
{
private:
public:
    virtual bool saveTape(const Tape& tape) = 0;

    virtual std::vector<TElem> getAllHelperTapes() const = 0;

    virtual void setFilename(string filename) = 0;
};