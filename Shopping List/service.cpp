
#include "service.h"

void service::setFilename(string filename)
{
    this->filename = filename;
    fstream inFile;
    inFile.open(this->filename);
    inFile.close();
}

std::vector<TElem> service::getAllItems() const
{
    fstream inFile;
    inFile.open(filename);
    vector<TElem> newVector;

    std::string line;
    //std::getline(inFile, line);
    while(std::getline(inFile, line))
    {
        string newLine = line;

        int indexBeginning = 0, indexEnding, size;
        string category, name;
        int quantity;

        //category
        indexEnding = indexBeginning;
        while (newLine[indexEnding] != '|')
            indexEnding++;
        size = indexEnding - indexBeginning - 1;
        category = newLine.substr(indexBeginning, size);

        //name
        indexEnding += 2;
        indexBeginning = indexEnding;
        while (newLine[indexEnding] != '|')
            indexEnding++;
        size = indexEnding - indexBeginning - 1;
        name = newLine.substr(indexBeginning, size);

        //quantity
        indexEnding += 2;
        indexBeginning = indexEnding;
        indexEnding = newLine.length();
        size = indexEnding - indexBeginning;
        quantity = stoi(newLine.substr(indexBeginning, size));

        domain item = domain(category, name, quantity);
        newVector.push_back(item);
    }
    inFile.close();
    return newVector;
}

bool service::deleteItem(string &name)
{
    vector<TElem> newVector = this->getAllItems();

    for (auto current = newVector.begin(); current < newVector.end(); current++)
        if (current->getName() == name)
        {
            newVector.erase(current);
            return true;
        }
    return false;
}

std::vector<TElem> service::filterItems(string &category)
{
    vector<TElem> newVector = this->getAllItems();
    vector<TElem> filteredVector;

    for (auto current : newVector)
        if (current.getCategory() == category)
        {
            filteredVector.push_back(current);
        }

    return filteredVector;
}