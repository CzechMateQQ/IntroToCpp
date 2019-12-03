#pragma once

class piggybank
{
private:
	// Maintains the current balance of the piggy bank.
	float currentBalance;

public:
	// Add funds to the value of the current balance.
	void deposit(float net);

	// Returns and clears the total current balance.
	float withdraw();

	// Returns the current balance of the function.
	float balance();
};

