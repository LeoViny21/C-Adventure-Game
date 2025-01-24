#pragma once
#include <string>
#include <vector>

using namespace std;

class Room
{
private:
	string name;
	string description;
	string far_description;
	vector<Room*> pathways;
public:
	Room(string i_name, string i_description, string i_far_description);
	string getName();
	string getDescription();
	string getFarDescription();

	void addPathway(Room& new_pathway);
	vector<Room*> getPathways();
};
