#pragma once

struct piggybank
{
	int ones;
	int twos;
	int fives;
	int quarters;
	int dimes;
	int nickles;
	int pennies;
};

float calcPiggybankNotes(piggybank piggy);
float calcPiggybankCoins(piggybank piggy);
float calcPiggybankTotal(piggybank piggy);