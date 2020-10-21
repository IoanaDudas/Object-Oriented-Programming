#pragma once
#include "domain.h"
#include <vector>
#include <fstream>

typedef domain TElem;

class service {

private:
    string filename;

public:
    service(){}

    void setFilename(string filename);

    std::vector<TElem> getAllItems() const;

    bool deleteItem(string &name);

    std::vector<TElem> filterItems(string &category);
};


