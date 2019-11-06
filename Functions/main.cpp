#include <iostream>
#include "utils.h"

using std::cout;
using std::cin;
using std::endl;

//declare and define sum
int sum(int a, int b)
{
	return a + b;
}

//declare sub
int sub(int a, int b);

int main()
{
	//call sum
	sum(5, 7);

	//call mul
	mul(5, 5);

	//call div
	div(10, 5);

	while(true) {}

	return 0;
}

//declare and define sub
int sub(int a, int b)
{
	return a - b;
}