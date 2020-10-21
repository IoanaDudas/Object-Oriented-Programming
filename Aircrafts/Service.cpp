
#include "Service.h"

using namespace std;

vector<TElem> Service::getAllTAircraftService() const
{
    return this->repository.getAllAircraft();
}

bool Service::addAircraftService(const std::string id, const std::string model, const std::string privacy, const std::string wings, const std::string weightLimit)
{
    if(isNumber(id) == false)
        return false;
    int idInt = stoi(id);
    if(model == "helicopter")
    {
        Helicopter * helicopter = new Helicopter(idInt, privacy);
        return this->repository.addAircraft(helicopter);
    }
    else if(model == "plane")
    {
        Plane * plane = new Plane(idInt, privacy, wings);
        return this->repository.addAircraft(plane);
    }
    else if(model == "hot air balloon")
    {
        if(isNumber(weightLimit) == false)
            return false;
        int weightLimitInt = stoi(weightLimit);
        HotAirBalloon * hotAirBalloon = new HotAirBalloon(idInt, weightLimitInt);
        return this->repository.addAircraft(hotAirBalloon);
    }
    else return false;
}

bool Service::isNumber(const std::string& string)
{
    std::string::const_iterator stringIterator = string.begin();
    while (stringIterator != string.end() && std::isdigit(*stringIterator))
        ++stringIterator;
    if (!string.empty() && stringIterator == string.end())
        return true;
    return false;
}