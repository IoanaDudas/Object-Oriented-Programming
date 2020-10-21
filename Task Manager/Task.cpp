#include "Task.h"

string Task::getDescription() const
{
    return this->description;
}

int Task::getDuration() const
{
    return this->duration;
}

int Task::getPriority() const
{
    return this->priority;
}

string Task::toString() const
{
    string string;
    string = this->description + "," + to_string(this->duration) + "," + to_string(this->priority);
    return string;
}
