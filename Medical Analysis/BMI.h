#pragma once

#include "MedicalAnalysis.h"

class BMI : public MedicalAnalysis{
private:
    double value;
public:
    BMI(double value, string date);

    bool isResultOK() override;

    std::string toString() override;
};
