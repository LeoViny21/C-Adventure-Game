#pragma once
#include <string>
#include <iostream>

using namespace std;

class Location
{
private:
	string name;

	string description;

	string ASCIIArt;

public:
	Location(string init_setName = "Dale Street", string setDescription = "", string setASCIIArt = "");
};

