#pragma once

#include "Repository.h"
#include <cctype>
#include <string>
#include <vector>

class Service
{
private:
    Repository& repository;
public:
    //constructor for service
    Service(Repository& aircraftRepository) : repository(aircraftRepository){}

    //returns all the tapes in the repository
    std::vector<TElem> getAllTAircraftService() const;

    //adds a tape to the repository
    bool addAircraftService(const std::string id, const std::string model, const std::string privacy, const std::string wings, const std::string weightLimit);

private:
    //checks to see if a given std::string is a number
    bool isNumber(const std::string& string);
};
