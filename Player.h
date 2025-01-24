#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

using namespace std;

class Player
{
private:
	string name;

	vector<string> dialogue;
	vector<Item> inventory;

	int money;
	int historyFragment;

public:
	Player();

	vector<string> getDialogue();
	vector<string> addDialogue();

	string getName();
	string setName(string newName);

	int setMoney(int Value);
	int addMoney(int Value);
	int subMoney(int Value);

	vector<Item> getInventory();
	void addItem(const Item& newItem);
	bool removeItem(const Item& itemToRemove);

	int getHistoryFragment();
	int updateHistoryFragment();
};

