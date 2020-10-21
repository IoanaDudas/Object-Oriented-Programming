#include "Action.h"

void ActionAdd::executeUndo()
{
    this->repository.removeTape(this->addedTape.getTitle());
}

void ActionAdd::executeRedo()
{
    this->repository.addTape(this->addedTape);
}


void ActionRemove::executeUndo()
{
    this->repository.addTape(this->removedTape);
}

void ActionRemove::executeRedo()
{
    this->repository.removeTape(this->removedTape.getTitle());
}


void ActionUpdate::executeUndo()
{
    this->repository.updateTape(this->oldTape);
}

void ActionUpdate::executeRedo()
{
    this->repository.updateTape(this->newTape);
}
