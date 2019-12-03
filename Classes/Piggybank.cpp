#include "piggybank.h"



void piggybank::deposit(float net)
{
	currentBalance += net;
}

float piggybank::withdraw()
{
	int balance = currentBalance;
	currentBalance = 0;
	return balance;
}

float piggybank::balance()
{
	return currentBalance;
}