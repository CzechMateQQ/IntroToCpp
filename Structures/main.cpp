#include <iostream>
#include "person.h"
#include "piggy.h"

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

	cout << jesseBank() << endl;

	while(true) {}

	return 0;
}