#pragma once
#include <Bill.h>
#include <fstream>
#include <vector>

typedef Bill TElem;

class Service {

private:
    string filename;

public:
    Service(){}

    void setFilename(string filename);

    std::vector<TElem> getAllBills() const;

    std::vector<TElem> sortBills();

    float totalUnpaid(string &companyName);
};
