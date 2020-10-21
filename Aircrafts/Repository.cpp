#include "Repository.h"

bool Repository::addAircraft(Aircraft *aircraft)
{
    int id = aircraft->getId();

    for (auto current : this->aircraftList)
        if (current->getId() == id)
            return false;
    this->aircraftList.push_back(aircraft);
    return true;
}

std::vector<TElem> Repository::getAllAircraft() const
{
    return this->aircraftList;
}

Repository::~Repository()
{
    for (auto current : this->aircraftList)
        delete current;
}