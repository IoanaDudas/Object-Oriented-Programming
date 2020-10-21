#pragma once
#include <string>
#include <vector>

using namespace std;

class Aircraft
{
private:
    int id;
    string model;
    vector<string> activities;
    int maximumAltitude;
public:
    virtual void setMaximumAltitude(int altitude);

    virtual int getMaximumAltitude() const;

    virtual void newActivity(string activity);

    virtual vector<string> getActivities() const;

    virtual void setId(int id);

    virtual int getId() const;

    virtual void setModel(string model);

    virtual string getModel() const;

    virtual std::string toString() = 0;
};
