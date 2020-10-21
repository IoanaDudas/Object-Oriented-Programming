#include "Service.h"
#include <algorithm>

bool myfunction(Task a, Task b) { return (a.getPriority()<b.getPriority()); }

vector<Task> Service::readFromFile() const
{
	vector<Task> vectorResult;

	ifstream file(this->fileName);
	string line;
	while (file >> line)
	{
		stringstream stringStream(line);
		string token;
		vector<string> result;
		while (getline(stringStream, token, ','))
		{
			result.push_back(token);
		}
		Task task = Task(result[0], stoi(result[1]), stoi(result[2]));
		vectorResult.push_back(task);
	}

	sort(vectorResult.begin(), vectorResult.end(), myfunction);
	return vectorResult;
}

vector<Task> Service::getAll() const
{
	return this->taskList;
}

int Service::getDurationPriority(int priority)
{
	int duration = 0;
	for (auto i : this->taskList)
	{
		if (i.getPriority() == priority)
		{
			duration = duration + i.getDuration();
		}
	}

	return duration;
}

