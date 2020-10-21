
#include "Aircraft.h"

void Aircraft::setMaximumAltitude(int altitude)
{
    this->maximumAltitude = altitude;
}

int Aircraft::getMaximumAltitude() const
{
    return this->maximumAltitude;
}

void Aircraft::newActivity(string activity)
{
    this->activities.push_back(activity);
}

vector<string> Aircraft::getActivities() const
{
    return this->activities;
}

void Aircraft::setId(int id)
{
    this->id = id;
}

int Aircraft::getId() const
{
    return this->id;
}

void Aircraft::setModel(string model)
{
    this->model = model;
}

string Aircraft::getModel() const
{
    return this->model;
}