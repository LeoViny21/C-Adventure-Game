#pragma once
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Item
{
private:
	string name;
	string description;
	int value;

public:
	Item(string init_setName = "Bob", string setDescription = "", int setValue = 0);

	string toString();

	void setName(string playerName);
	void setDescription(string itemDescription);
	void setValue(int Num);

	string getName();
	string getDescription();
	int getValue();

};

