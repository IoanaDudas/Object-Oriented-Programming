#pragma once

#include "Veggie.h"
#include <fstream>
#include <sstream>

class Service
{
private:
	string fileName;
	vector<Veggie> veggieList;
public:
	Service(string file) : fileName{ file } { this->veggieList = this->readFromFile(); }
	vector<Veggie> readFromFile() const;
	vector<string> getAllFamilies() const;

	/*
	Description: 
		- function that returns a vector with all the entreis that are of a given familiy
	Input:
		- family: string for the family
	Outpur:
		- vector containing only vegetables of the family 'family'
	*/
	vector<Veggie> getAllFromFamily(string family) const;
	vector<Veggie> getAll() const;
};

