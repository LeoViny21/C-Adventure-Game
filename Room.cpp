#include "Room.h"

using namespace std;

Room::Room(string i_name, string i_description, string i_far_description) {
	name = i_name;
	description = i_description;
	far_description = i_far_description;
	pathways = {};
}

string Room::getName()
{
    return name;
}

string Room::getDescription()
{
    return description;
}

string Room::getFarDescription()
{
	return far_description;
}

void Room::addPathway(Room& new_pathway)
{
	pathways.push_back(&new_pathway);
}

vector<Room*> Room::getPathways()
{
	return pathways;
}
