#include <iostream>
#include "person.h"
#include "piggy.h"
#include "student.h"
#include "vector2D.h"
#include "zombieBattle.h"

using std::cout;
using std::cin;
using std::endl;

void example()
{
	person jesse;
	jesse.age = 22;
	jesse.cash = 155.2;
	jesse.killCount = 7;

	cout << "Jesse had " << jesse.cash << " dollars" << endl;

	float withdraw = getMoney(&jesse, 100);

	cout << "Jesse has " << jesse.cash << " dollars" << endl;

	person * someone = &jesse;
	erasePerson(&someone);

	if (someone == nullptr)
	{
		cout << "Someone got erased!" << endl;
	}
	else
	{
		cout << "Someone is there" << endl;
	}
}

float jesseBank()
{
	piggybank jesse;
	jesse.ones = 3;
	jesse.twos = 1;
	jesse.fives = 2;
	jesse.quarters = 7;
	jesse.dimes = 5;
	jesse.nickles = 4;
	jesse.pennies = 13;

	return calcPiggybankTotal(jesse);
}

int main()
{
	//example();

	//cout << jesseBank() << endl;

	student students[6];

	students[0].addData(12006, 1, 45);
	students[1].addData(12007, 2, 29);
	students[2].addData(12008, 2, 32);
	students[3].addData(12009, 1, 40);
	students[4].addData(12010, 2, 47);
	students[5].addData(12011, 2, 28);
	
	//cout << students[0].score;

	//students[5].printStudent();

	//cout << avgScore(students, 6);

	//cout << avgScore(students, 6);

	//cout << medScore(students, 6);

	//cout << courseTotal(students, 6, 1);

	vector2D vec1 = { 4, 9 };
	vector2D vec2 = { 3, 1 };

	//(vec1.sum(vec2)).vecPrint();
	//(vec1.diff(vec2)).vecPrint();

	//cout << vec1.distance(vec2) << endl;

	player Jesse;
	Jesse.health = 100;
	Jesse.attack = 20;
	Jesse.defense = 10;

	zombie Zomboy;
	Zomboy.health = 100;
	Zomboy.attack = 35;
	Zomboy.defense = 5;

	battle(Jesse, Zomboy);

	while(true) {}

	return 0;
}