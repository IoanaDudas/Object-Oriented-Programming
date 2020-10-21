#pragma once
#include <string>

using namespace std;


class Building {
private:
    std::string address;
    int constructionYear;
public:
    virtual std::string toString();

    virtual bool mustBeRestored() = 0;

    virtual bool canBeDemolished() = 0;

    std::string getAddress();

    void setAddress(string address);

    int getConstructionYear();

    void setConstructionYear(int year);
};