#pragma once

#include <string>
#include <vector>

using namespace std;

class Veggie
{
private:
	string family;
	string name;
	string parts;
public:
	Veggie(string _family, string _name, string _parts) : family{ _family }, name{ _name }, parts{ _parts } {}
	string getFamily() const;
	string getName() const;
	string getParts() const;
};

