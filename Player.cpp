#include "Player.h"
#include <iostream>
#include "Item.h"

using namespace std;

Player::Player()
{
}

vector<string> Player::getDialogue()
{
	return vector<string>();
}

vector<string> Player::addDialogue()
{
	return vector<string>();
}

string Player::getName()
{
	return string();
}

string Player::setName( string newName)
{
	name = newName;
}

int Player::setMoney(int Value)
{
	money = Value;
}

int Player::addMoney(int Value)
{
	money += Value;
}

int Player::subMoney(int Value)
{
	money -= Value;
}

vector<Item> Player::getInventory()
{
	return inventory;
}

void addItem(const Item& newItem) 
{
	inventory.push_back(newItem); // Add the single item to the inventory
}

bool Player::removeItem(const Item& itemToRemove)
{
	if (remove(inventory.begin(), inventory.end(), itemToRemove) != inventory.end()) {
		inventory.erase(remove(inventory.begin(), inventory.end(), itemToRemove), inventory.end());
		return true; // Item was successfully removed
	}
	return false; // Item was not found
}

int Player::getHistoryFragment()
{
	return historyFragment;
}

int Player::updateHistoryFragment()
{
	historyFragment += 1;
}



