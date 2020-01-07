#pragma once
#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;

class SaveGame
{
public:
	SaveGame();
	void Options();
	~SaveGame();

	int num = 97;
	float decimal = 6.6f;
	bool maybe = true;
	char charizard = 'j';
	char* charPoint = &charizard;
};

