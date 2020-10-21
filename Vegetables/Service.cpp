#include "Service.h"
#include <algorithm>

bool myfunction(Veggie a, Veggie b) { return (a.getFamily() < b.getFamily()); }

vector<Veggie> Service::readFromFile() const
{
	vector<Veggie> vectorResult;

	ifstream file(this->fileName);
	string line;
	while (file >> line)
	{
		stringstream stringStream(line);
		string token;
		vector<string> result;
		while (getline(stringStream, token, ';'))
		{
			result.push_back(token);
		}
		Veggie veggie = Veggie(result[0], result[1], result[2]);
		vectorResult.push_back(veggie);
	}

	/*
	Description:
		- function that sorts the vector by the family
	Input:
		- the vector that will be sorted
	Output:
		- the sorted vector
	*/
	sort(vectorResult.begin(), vectorResult.end(), myfunction);
	
	return vectorResult;
}

vector<string> Service::getAllFamilies() const
{
	vector<string> result;
	
	for (auto veggie : this->veggieList)
	{
		int sem = 1;
		for (auto fam : result)
		{
			if (veggie.getFamily() == fam)
			{
				sem = 0;
				break;
			}
		}
		if (sem == 1)
			result.push_back(veggie.getFamily());
	}
	
	return result;
}

vector<Veggie> Service::getAllFromFamily(string family) const
{
	vector<Veggie> result;
	for (auto veggie : this->veggieList)
	{
		if (veggie.getFamily() == family)
			result.push_back(veggie);
	}
	return result;
}

vector<Veggie> Service::getAll() const
{
	return this->veggieList;
}
