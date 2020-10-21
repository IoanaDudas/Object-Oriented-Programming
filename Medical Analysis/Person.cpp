
#include "Person.h"

void Person::addMedicalAnalysis(MedicalAnalysis* analysis)
{
    this->analysesList.push_back(analysis);
}

vector<TElem> Person::getAllAnalysis()
{
    return this->analysesList;
}

vector<TElem> Person::getAnalysisByMonth(int month)
{
    vector<TElem> newVector;
    for (auto current : this->analysesList)
    {
        int analysisMonth = stoi(current->getDate().substr(5, 2));
        if(analysisMonth == month)
            newVector.push_back(current);
    }
    return newVector;
}

vector<TElem> Person::getAnalysisBetweenDates(string startDate, string endDate)
{
    vector<TElem> newVector;
    for (auto current : this->analysesList)
    {
        string analysisDate = current->getDate();
        if(analysisDate > startDate and analysisDate < endDate)
            newVector.push_back(current);
    }
    return newVector;
}

bool Person::isIll(int month)
{
    for (auto current : this->analysesList)
    {
        int analysisMonth = stoi(current->getDate().substr(5, 2));
        if(analysisMonth == month)
        {
            if(!current->isResultOK())
                return true;
        }
    }
    return false;
}

void Person::writeToFile(string filename, string startDate, string endDate)
{
    fstream inFile;
    inFile.open(filename, ios::app);
    for (auto current : this->analysesList)
    {
        string analysisDate = current->getDate();
        if(analysisDate > startDate and analysisDate < endDate)
        {
            inFile << current->toString();
            if(!isIll(stoi(current->getDate().substr(5, 2))))
                inFile << "Person is not ill!\n\n";
            else
                inFile << "Person is ill!\n\n";
        }
    }
    string app = "open -a 'TextEdit' " + filename;
    inFile.close();
    system(app.c_str());
}

Person::~Person()
{
    for (auto current : this->analysesList)
    {
        delete current;
    }
}