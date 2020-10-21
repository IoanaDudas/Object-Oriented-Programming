#pragma once
#include <string>

using namespace std;


class MedicalAnalysis {
private:
    std::string date;
public:
    virtual std::string toString() = 0;

    virtual bool isResultOK() = 0;

    std::string getDate();

    void setDate(string date);
};