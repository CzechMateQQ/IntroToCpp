#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;


void PrintArray(int arr[], size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << "  ";
	}
}

int ArraySum(int arr[], size_t size)
{
	int result = 0;
	for (int i = 0; i < size; ++i)
	{
		result += arr[i];
	}
	return result;
}

int LargestValue(int arr[], size_t size)
{
	int max = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int FindIndex(int arr[], size_t size, int value)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == value)
		{
			return i;
		}
	}
	return -1;
}

int ElementCount(int arr[], size_t size, int value)
{
	int total = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == value)
		{
			total++;
		}
	}
	return total;
}

//bool Uniqueness(int arr[], size_t size)
//{
//	std::vector<int> vec(size);
//
//	for (int i = 0; i < size; ++i)
//	{
//		for (int j = 0; j < size; ++j)
//		{
//			vec[j] = arr[i];
//		}
//	}
//
//
//	return true;
//}

void Reverse(int arr[], size_t size)
{
	for (int i = size - 1; i >= 0 ; --i)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int values[]{ 2, 4, 6, 8, 10 };

	//PrintArray(values, 5);
	
	//cout << ArraySum(values, 5) << endl;

	//cout << LargestValue(values, 5) << endl;

	//cout << FindIndex(values, 5, 8) << endl;

	//cout << ElementCount(values, 5, 8) << endl;

	//cout << Uniqueness(values, 5) << endl;

	//Reverse(values, 5);

	while(true) {}

	return 0;
}