#pragma once
#include <string>

using namespace std;
class NPC
{
private:
	string name;

	string description;

	string storyLore;

	string password;

	int hintCount;

public:
	NPC(string init_setName = "Dave", string setdescription = "", string setStoryLore = "", string setPassword);

	bool checkPassword(string guessedPassword);

	string getdescription();

	string getStoryLore();

	int getHintCount();
	void updateHintCount();
};

