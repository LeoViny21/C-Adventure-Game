#pragma once
#include <string>
#include <iostream>

using namespace std;

class Puzzle
{
private:
	string name;

	string puzzleType;

	string puzzleContent;

public:
	Puzzle(string init_setName = "Dez Memories", string setPuzzleType = "", string setPuzzleContent = "");

};

