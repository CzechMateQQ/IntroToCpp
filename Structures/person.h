#pragma once

struct person
{
	int age;
	float cash;
	int killCount;
};

float getMoney(person * target, float withdraw);
void erasePerson(person ** target);