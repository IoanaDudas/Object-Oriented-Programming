#pragma once

#include "Repository.h"
#include <memory>

class Action
{
protected:
    Repository& repository;
public:
    Action(Repository& _repository) :repository(_repository) {}
    virtual ~Action() {};
    virtual void executeUndo() = 0;
    virtual void executeRedo() = 0;
};

class ActionAdd : public Action
{
private:
    Tape addedTape;
public:
    ActionAdd(Repository& _repository, Tape& _addedTape) : Action{ _repository }, addedTape{ _addedTape } {}
    void executeUndo() override;
    void executeRedo() override;
};


class ActionRemove : public Action
{
private:
    Tape removedTape;
public:
    ActionRemove(Repository& _repository, Tape& _removedTape) : Action{ _repository }, removedTape{ _removedTape } {}
    void executeUndo() override;
    void executeRedo() override;
};

class ActionUpdate : public Action
{
private:
    Tape oldTape;
    Tape newTape;
public:
    ActionUpdate(Repository& _repository, Tape& _oldTape, Tape& _newTape) : Action{ _repository }, oldTape{ _oldTape }, newTape{ _newTape } {}
    void executeUndo() override;
    void executeRedo() override;
};
