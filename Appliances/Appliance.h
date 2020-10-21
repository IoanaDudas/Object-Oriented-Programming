#pragma once
#include <string>

using namespace std;


class Appliance {
private:
    std::string id;
    double weight;
public:
    virtual std::string toString();

    virtual double consumedElectricity() = 0;

    std::string getId();

    void setId(string id);

    double getWeight();

    void setWeight(double weight);
};