#pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Task
{
private:
	string description;
	int duration;
	int priority;
public:
	Task(string desc, int dur, int pr) : description{ desc }, duration{ dur }, priority{ pr } {}
	string getDescription() const;
	int getDuration() const;
	int getPriority() const;
	string toString() const;
};

