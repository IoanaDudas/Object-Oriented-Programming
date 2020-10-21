#pragma once

#include "Task.h"
#include <sstream>
#include <fstream>

class Service
{
private:
	string fileName;
	vector<Task> taskList;
public:
	Service(string file) : fileName{ file } { this->taskList = readFromFile(); }
	vector<Task> readFromFile() const;
	vector<Task> getAll() const;

	/*
	Description: 
		- computes the total duration of the tasks with a given priority
	Input:
		- the priority
	Output:
		- the total duration
	*/
	int getDurationPriority(int priority);
};

