
#include "InMemoryRepositoryHelper.h"

bool InMemoryRepositoryHelper::saveTape(const Tape &tape)
{
    std::string title = tape.getTitle();

    for (auto current = this->tapeListHelper.begin(); current < this->tapeListHelper.end(); current++)
        if (current->getTitle() == title)
            throw SaveException{"Error saving tape!\n"};
    this->tapeListHelper.push_back(tape);
    return true;
}

std::vector<TElem> InMemoryRepositoryHelper::getAllHelperTapes() const
{
    return this->tapeListHelper;
}