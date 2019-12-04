#include <iostream>
#include "Aussie.h"

using std::cout;
using std::cin;
using std::endl;

int num = 6;
float floaty = 9.7f;
bool maybe = true;
char alpha = 'J';

int& numRef = num;
float& floatyRef = floaty;
bool& maybeRef = maybe;
char& alphaRef = alpha;

void multiplyFloats(float a, float b, float& c)
{
	c = a * b;
}

void swap(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}


int main()
{
	Aussie Bandit;

	Bandit.feedAussie(Bandit);
	Bandit.waterAussie(Bandit);
	Bandit.abuseAussie(Bandit);
	Bandit.coddleAussie(Bandit);
	
	cout << Bandit.happiness << endl;
	cout << Bandit.hunger << endl;
	cout << Bandit.thirst << endl;
	cout << Bandit.sanity << endl;

	while(true){}

	return 0;
}