#pragma once
#include <string>
#include <vector>
#include "Aircraft.h"

using namespace std;


class Plane : public Aircraft
{
private:
    string isPrivate;
    string wings;
public:
    Plane(int id, string privacy, string wings);

    void setIsPrivate(string privacy);

    string getIsPrivate() const;

    void setMainWings(string wings);

    string getMainWings() const;

    std::string toString() override;
};

