#pragma once
#include <string>
#include "MedicalAnalysis.h"
#include "BMI.h"
#include "BP.h"
#include <vector>
#include <fstream>
#include <iostream>

typedef MedicalAnalysis* TElem;

using namespace std;

class Person {
private:
    vector<TElem> analysesList;
    string name;
public:
    Person(){};

    void addMedicalAnalysis(MedicalAnalysis* analysis);

    vector<TElem> getAllAnalysis();

    vector<TElem> getAnalysisByMonth(int month);

    bool isIll(int month);

    vector<TElem> getAnalysisBetweenDates(string startDate, string endDate);

    void writeToFile(string filename, string startDate, string endDate);

    ~Person();
};

