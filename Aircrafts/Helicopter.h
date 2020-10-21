#pragma once
#include <string>
#include <vector>
#include "Aircraft.h"

using namespace std;


class Helicopter : public Aircraft
{
private:
    string isPrivate;
public:
    Helicopter(int id, string privacy);

    void setIsPrivate(string privacy);

    string getIsPrivate() const;

    std::string toString() override;
};

