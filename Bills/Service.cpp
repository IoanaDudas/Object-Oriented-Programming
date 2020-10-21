
#include "Service.h"


void Service::setFilename(string filename)
{
    this->filename = filename;
    fstream inFile;
    inFile.open(this->filename);
    inFile.close();
}


std::vector<TElem> Service::getAllBills() const
{
    fstream inFile;
    inFile.open(filename);
    vector<TElem> newVector;

    std::string line;

    while(std::getline(inFile, line))
    {
        string newLine = line;

        int indexBeginning = 0, indexEnding, size;
        string companyName, code;
        float sum;
        bool isPaid;

        //companyName
        indexEnding = indexBeginning;
        while (newLine[indexEnding] != ';')
            indexEnding++;
        size = indexEnding - indexBeginning;
        companyName = newLine.substr(indexBeginning, size);

        //code
        indexEnding += 2;
        indexBeginning = indexEnding;
        while (newLine[indexEnding] != ';')
            indexEnding++;
        size = indexEnding - indexBeginning;
        code = newLine.substr(indexBeginning, size);

        //sum
        indexEnding += 2;
        indexBeginning = indexEnding;
        while (newLine[indexEnding] != ';')
            indexEnding++;
        size = indexEnding - indexBeginning;
        sum = stof(newLine.substr(indexBeginning, size));

        //isPaid
        indexEnding += 2;
        indexBeginning = indexEnding;
        indexEnding = newLine.length();
        size = indexEnding - indexBeginning;
        isPaid = stoi(newLine.substr(indexBeginning, size));

        Bill bill = Bill(companyName, code, sum, isPaid);
        newVector.push_back(bill);
    }
    inFile.close();
    return newVector;
}

bool myFunction(Bill a, Bill b)
{
    return a.getCompanyName() < b.getCompanyName();
}

std::vector<TElem> Service::sortBills()
{
    vector<TElem> newVector = this->getAllBills();

    sort(newVector.begin(), newVector.end(), myFunction);

    return newVector;
}

float Service::totalUnpaid(string &companyName)
{
    vector<TElem> newVector = this->getAllBills();
    float total = 0;

    for (auto current = newVector.begin(); current < newVector.end(); current++)
        if (current->getCompanyName() == companyName && current->getIsPaid() == 0)
            total += current->getSum();

    return total;
}