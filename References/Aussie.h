#pragma once
#include <iostream>

class Aussie
{
public:
	Aussie();
	~Aussie();

	float happiness = 0.0f;
	float hunger = 10.0f;
	float thirst = 10.0f;
	float sanity = 5.0f;

	void feedAussie(Aussie& aus);
	void waterAussie(Aussie& aus);
	void abuseAussie(Aussie& aus);
	void coddleAussie(Aussie& aus);
};

