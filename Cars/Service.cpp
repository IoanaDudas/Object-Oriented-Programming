
#include "Service.h"


void Service::setFilename(string filename)
{
    this->filename = filename;
    fstream inFile;
    inFile.open(this->filename);
    inFile.close();
}


std::vector<TElem> Service::getAllItems() const
{
    fstream inFile;
    inFile.open(filename);
    vector<TElem> newVector;

    std::string line;

    while(std::getline(inFile, line))
    {
        string newLine = line;

        int indexBeginning = 0, indexEnding, size;
        string manufacturerName, model, color;
        int year;

        //manufacturerName
        indexEnding = indexBeginning;
        while (newLine[indexEnding] != '|')
            indexEnding++;
        size = indexEnding - indexBeginning - 1;
        manufacturerName = newLine.substr(indexBeginning, size);

        //model
        indexEnding += 2;
        indexBeginning = indexEnding;
        while (newLine[indexEnding] != '|')
            indexEnding++;
        size = indexEnding - indexBeginning - 1;
        model = newLine.substr(indexBeginning, size);

        //year
        indexEnding += 2;
        indexBeginning = indexEnding;
        while (newLine[indexEnding] != '|')
            indexEnding++;
        size = indexEnding - indexBeginning - 1;
        year = stoi(newLine.substr(indexBeginning, size));

        //color
        indexEnding += 2;
        indexBeginning = indexEnding;
        indexEnding = newLine.length();
        size = indexEnding - indexBeginning;
        color = newLine.substr(indexBeginning, size);

        Car car = Car(manufacturerName, model, year, color);
        newVector.push_back(car);
    }
    inFile.close();
    return newVector;
}

bool myFunction(Car a, Car b)
{
    return a.getManufacturerName() < b.getManufacturerName();
}

std::vector<TElem> Service::getAllItemsSorted() const
{
    vector<TElem> newVector = this->getAllItems();

    sort(newVector.begin(), newVector.end(), myFunction);

    return newVector;
}

int Service::numberOfCars(string &manufacturerName)
{
    vector<TElem> newVector = this->getAllItems();
    int total = 0;

    for (auto current = newVector.begin(); current < newVector.end(); current++)
        if (current->getManufacturerName() == manufacturerName)
            total += 1;

    return total;
}

