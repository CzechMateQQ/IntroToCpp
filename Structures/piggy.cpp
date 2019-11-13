#include "piggy.h"

float calcPiggybankNotes(piggybank piggy)
{
	return (piggy.ones) + (piggy.twos * 2) + (piggy.fives * 5);
}

float calcPiggybankCoins(piggybank piggy)
{
	return (piggy.quarters * 0.25f) + 
		   (piggy.dimes * 0.1f) + 
		   (piggy.nickles * 0.05f) + 
		   (piggy.pennies * 0.01f);
}

float calcPiggybankTotal(piggybank piggy)
{
	return calcPiggybankNotes(piggy) + calcPiggybankCoins(piggy);
}