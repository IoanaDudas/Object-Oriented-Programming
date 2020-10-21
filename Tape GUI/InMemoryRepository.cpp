
#include "InMemoryRepository.h"
#include <vector>

InMemoryRepository::InMemoryRepository()
{
    this->indexTapeList = -1;
}

bool InMemoryRepository::addTape(const Tape &tape)
{
    std::string title = tape.getTitle();

    for (auto current = this->tapeList.begin(); current < this->tapeList.end(); current++)
        if (current->getTitle() == title)
            throw AddException{"Error adding tape!\n"};
    this->tapeList.push_back(tape);
    return true;
}

bool InMemoryRepository::removeTape(const std::string &title)
{
    for (auto current = this->tapeList.begin(); current < this->tapeList.end(); current++)
        if (current->getTitle() == title)
        {
            this->tapeList.erase(current);
            return true;
        }
    throw RemoveException{"Error removing tape!\n"};
}

bool InMemoryRepository::updateTape(const Tape &tape)
{
    std::string title = tape.getTitle();

    for(auto &current : this->tapeList)
        if(current.getTitle() == title)
        {
            current = tape;
            return true;
        }
    throw UpdateException{"Error updating tape!\n"};
}

TElem InMemoryRepository::nextRepository()
{
    this->indexTapeList++;
    if (this->indexTapeList >= this->tapeList.size())
        this->indexTapeList = 0;

    return this->tapeList.at(indexTapeList);
}

int InMemoryRepository::getLength()
{
    return this->tapeList.size();
}

std::vector<TElem> InMemoryRepository::getAllTapes() const
{
    return this->tapeList;
}
