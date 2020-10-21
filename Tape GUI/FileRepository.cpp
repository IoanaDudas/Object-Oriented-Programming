#include "FileRepository.h"

FileRepository::FileRepository()
{
    this->indexTapeList = -1;
}

bool FileRepository::addTape(const Tape& tape)
{
    fstream inFile;
    inFile.open(this->filename);
    Tape newTape;

    while(inFile >> newTape)
    {
        if (newTape.getTitle() == tape.getTitle())
        {
            inFile.close();
            throw AddException{"Error adding tape!\n"};
        }
    }
    inFile.close();
    inFile.open(this->filename, ios::app);
    inFile << tape;
    inFile.close();
    return 1;

}

bool FileRepository::removeTape(const std::string& title)
{
    fstream inFile;
    inFile.open(this->filename);
    Tape newTape;
    vector<TElem> newVector;
    int tapeInFile = 0;

    while(inFile >> newTape)
    {
        if (newTape.getTitle() != title)
            newVector.push_back(newTape);
        if(newTape.getTitle() == title)
            tapeInFile = 1;
    }
    if(tapeInFile == 1)
    {
        inFile.open(this->filename, std::ofstream::out);
        inFile.close();
        inFile.open(this->filename, std::ios::out);
        for(auto &current : newVector)
            inFile << current;
        inFile.close();
        return 1;
    }
    throw RemoveException{"Error removing tape!\n"};

}

bool FileRepository::updateTape(const Tape& tape)
{
    fstream inFile;
    inFile.open(this->filename);
    Tape newTape;
    vector<TElem> newVector;
    int tapeInFile = 0;

    while(inFile >> newTape)
    {
        if (newTape.getTitle() != tape.getTitle())
            newVector.push_back(newTape);
        else
        {
            newVector.push_back(tape);
            tapeInFile = 1;
        }
    }
    if(tapeInFile == 1)
    {
        inFile.open(this->filename, std::ofstream::out);
        inFile.close();
        inFile.open(this->filename, std::ios::out);
        for(auto &current : newVector)
            inFile << current;
        inFile.close();
        return 1;
    }
    throw UpdateException{"Error updating tape!\n"};
}

TElem FileRepository::nextRepository()
{
    this->indexTapeList++;
    if (this->indexTapeList >= getLength())
        this->indexTapeList = 0;

    fstream inFile;
    inFile.open(filename);
    Tape newTape;
    int stepsUntilNext = 0;

    while(stepsUntilNext <= this->indexTapeList)
    {
        inFile >> newTape;
        stepsUntilNext++;
    }
    inFile.close();

    return newTape;
}

int FileRepository::getLength()
{
    fstream inFile;
    inFile.open(filename);
    Tape newTape;
    int numberOfElements = 0;

    while(inFile >> newTape)
        numberOfElements++;
    inFile.close();
    return numberOfElements;
}

std::vector<TElem> FileRepository::getAllTapes() const
{
    fstream inFile;
    inFile.open(filename);
    Tape newTape;
    vector<TElem> newVector;

    while(inFile >> newTape)
        newVector.push_back(newTape);
    inFile.close();
    return newVector;
}

void FileRepository::setFilename(string filename)
{
    this->filename = filename;
    fstream inFile;
    inFile.open(this->filename);
    inFile.close();
}