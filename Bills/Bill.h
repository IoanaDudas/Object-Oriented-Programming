#pragma once
#include <iostream>

using namespace std;

class Bill {
private:
    string companyName;
    string code;
    float sum;
    bool isPaid;

public:
    Bill(string companyName, string code, float sum, bool isPaid);

    float getSum();

    string getCompanyName();

    bool getIsPaid();

    string getCode();

    string toString();
};

