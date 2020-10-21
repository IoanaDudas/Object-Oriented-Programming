#pragma once
#include <iostream>

using namespace std;

class domain {

private:
    string category;
    string name;
    int quantity;

public:
    domain(string category, string name, int quantity);

    string getCategory();

    string getName();

    int getQuantity();

    string toString();
};

