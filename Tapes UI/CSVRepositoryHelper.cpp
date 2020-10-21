
#include "CSVRepositoryHelper.h"


bool CSVRepositoryHelper::saveTape(const Tape &tape)
{
    fstream inFile;
    inFile.open(this->filename);
    Tape newTape;

    while(inFile >> newTape)
    {
        if (newTape.getTitle() == tape.getTitle())
        {
            inFile.close();
            throw SaveException{"Error saving tape!\n"};
        }
    }
    inFile.close();
    inFile.open(this->filename, ios::app);
    inFile << tape;
    inFile.close();
    return 1;
}

std::vector<TElem> CSVRepositoryHelper::getAllHelperTapes() const
{
    fstream inFile;
    inFile.open(this->filename);
    Tape newTape;
    vector<TElem> newVector;

    while(inFile >> newTape)
        newVector.push_back(newTape);
    string app = "open -a 'TextEdit' " + filename;
    inFile.close();

    system(app.c_str());
    return newVector;
}

void CSVRepositoryHelper::setFilename(string filename)
{
    this->filename = filename;
    fstream inFile;
    inFile.open(this->filename);
    inFile.close();
}