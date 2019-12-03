#include "Hero.h"
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

hero::hero()
{
	strcpy_s(nameOne, sizeof(nameOne), "DefaultOne");
	strcpy_s(nameTwo, sizeof(nameTwo), "DefaultTwo");
	srand(time(NULL));
	health = rand() % 50 + 100;
	attack = rand() % 25 + 50;
	defense = rand() % 100 + 200;
	status();
}

hero::hero(const char * firstName, const char * lastName)
{
	strcpy_s(nameOne, sizeof(nameOne), firstName);
	strcpy_s(nameTwo, sizeof(nameTwo), lastName);
	status();
}

hero::hero(int healthPts)
{
	health = healthPts;
	status();
}

hero::hero(float atkPower, float defPower)
{
	attack = atkPower;
	defense = defPower;
	status();
}

hero::hero(const char * firstName, const char * lastName,
	int healthPts, float atkPower, float defPower)
{
	strcpy_s(nameOne, sizeof(nameOne), firstName);
	strcpy_s(nameTwo, sizeof(nameTwo), lastName);
	health = healthPts;
	attack = atkPower;
	defense = defPower;
	status();
}

hero::~hero()
{
	cout << nameOne << " " << nameTwo << " has died.";
}

void hero::status()
{
	cout << nameOne << " " << nameTwo << ": " << health << " health points, "
		<< attack << " attack power, " << defense << " defense power" << endl;
}
