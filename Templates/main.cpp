#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template<typename T>
T min(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

template<typename T>
T max(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

template<typename T>
T clamp(T a, T b, T c)
{
	if (c < a)
	{
		c = a;
	}
	else if(c > b)
	{
		c = b;
	}
	return c;
}

int main()
{
	//cout << min(3, 4) << endl;
	//cout << min(3, 3) << endl;
	//cout << min(99, 0) << endl;

	//cout << max(7, 10) << endl;
	//cout << max(5, 0) << endl;
	//cout << max(6, 6) << endl;

	cout << clamp(0, 3, 7) << endl;
	cout << clamp(0, 3, -6) << endl;
	cout << clamp(0, 3, 2) << endl;


	while (true) {}

	return 0;
}