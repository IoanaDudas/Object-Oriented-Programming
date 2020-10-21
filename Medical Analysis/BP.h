#pragma once

#include "MedicalAnalysis.h"

class BP : public MedicalAnalysis{
private:
    int systolicValue;
    int diastolicValue;
public:

    BP(int systolicValue, int diastolicValue, string date);

    bool isResultOK() override;

    std::string toString() override;
};
