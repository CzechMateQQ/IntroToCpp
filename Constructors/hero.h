#pragma once
class hero
{
public:
	hero();
	hero(const char * firstName, const char * lastName);
	hero(int healthPts);
	hero(float atkPower, float defPower);
	hero(const char * firstName, const char * lastName,
		int healthPts, float atkPower, float defPower);

	~hero();

	void status();

private:
	char nameOne[15];
	char nameTwo[15];
	int health;
	float attack;
	float defense;
};

