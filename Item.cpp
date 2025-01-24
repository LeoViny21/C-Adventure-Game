#include "Item.h"

using namespace std;


Item::Item(string init_setName, string setDescription, int setValue)
	: name(init_setName), description(setDescription), value(setValue) {
}

string Item::toString()
{
	return getName() + " " + getDescription() + " " + to_string(getValue());
}

void Item::setName(string playerName)
{
	name = playerName;
}

void Item::setDescription(string itemDescription)
{
	description = itemDescription;
}

void Item::setValue(int Num)
{
	value = Num;
}

string Item::getName()
{
	return name;
}

string Item::getDescription()
{
	return description;
}

int Item::getValue()
{
	return value;
}

