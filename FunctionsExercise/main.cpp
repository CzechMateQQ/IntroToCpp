#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;

void Hello();

int Square(int a);

float Fraction(int a, int b);

void PairPrinting(int a, int b)
{
	cout << a << ", " << b << endl;
}

int SumOfThree(int a, int b, int c)
{
	return a + b + c;
}

int Min(int a, int b)
{
	if (a <= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int Max(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int Clamp(int a, int b, int c)
{
	if (c < a)
	{
		c = a;
		return c;
	}
	else if (c > b)
	{
		c = b;
		return c;
	}
	else
	{
		return c;
	}
}

float Distance(int x1, int y1, int x2, int y2)
{
	return sqrt((float)(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

float EstimatedArrival(int x1, int y1, int x2, int y2, int a)
{
	float dist = (float)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return dist / a;
}

float LinearInterpolation(int a, int b, float c)
{
	int dist = b - a;
	float newDist = (float)dist * c;
	return newDist + a;
}

int ClampTwo(int a, int b, int c)
{
	c = Max(a, c);
	c = Min(b, c);
	return c;
}

void HighLow()
{
	int guess = 0;
	srand(time(NULL));
	int target = rand() % 10 + 1;
	int guessNum = 0;
	
	do
	{
		cout << "Please enter a whole number from 1 to 10:" << endl;
		cin >> guess;

		if (guess < target && guessNum < 4)
		{
			cout << "Your guess is too low, please try again" << endl;
		}
		else if (guess > target && guessNum < 4)
		{
			cout << "Your guess is too high, please try again" << endl;
		}

		guessNum++;

	} while (guess != target && guessNum < 5);

	if (guess == target)
	{
		cout << "Your guess is correct!" << endl;
	}
	else if (guess != target)
	{
		cout << "Mission failed, guess limit reached" << endl;
	}
}

char ToUpperLower(char a)
{
	if (a > 96 && a < 123)
	{
		a -= 32;
	}
	else if (a > 64 && a < 91)
	{
		a += 32;
	}
	else
	{
		a = a;
	}
	return a;
}

int main()
{
	//Hello();

	//cout << Square(3) << endl;

	//cout << Fraction(5, 8) << endl;

	//PairPrinting(4, 1);

	//cout << SumOfThree(1, 8, 3) << endl;

	//cout << Min(12, 9) << endl;

	//cout << Max(12, 9) << endl;

	//cout << Clamp(15, 30, 52) << endl;

	//cout << Distance(7, 23, 9, 0) << endl;

	//cout << EstimatedArrival(1, 5, 9, 2, 2) << endl;

	//cout << LinearInterpolation(2, 7, 0.5f) << endl;

	//cout << ClampTwo(15, 30, 12) << endl;

	//HighLow();

	//cout << ToUpperLower('Q') << endl;

	while(true) {}

	return 0;
}

void Hello()
{
	cout << "Hello Functions" << endl;
}

int Square(int a)
{
	return a * a;
}

float Fraction(int a, int b)
{
	return (float)a / (float)b;
}

