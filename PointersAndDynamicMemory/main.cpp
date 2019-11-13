#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int sum(int * numbers, size_t length)
{
	int total = 0;

	for (size_t i = 0; i < length; ++i)
	{
		total += numbers[i];
	}

	return total;
}

int * zeroArray(size_t length)
{
	int * arr = new int[length];

	for (size_t i = 0; i < length; ++i)
	{
		arr[i] = 0;
	}

	return arr;
}

void example()
{
	//pointer syntax
	//dynamic memory allocation
	//dynamic memory deallocation

	int walletCount = 10;
	int * meeples = new int; //instantiate int pointer w/ single int
	int * wallets = new int[walletCount];

	wallets[0] = 5;
	wallets[1] = 2;
	wallets[2] = 67;
	wallets[3] = 0;
	wallets[4] = 9;
	wallets[5] = 12;
	wallets[6] = 4;
	wallets[7] = 46;
	wallets[8] = 27;
	wallets[9] = 19;

	int * noWallets = zeroArray(1000);

	int total = 0;
	total = sum(wallets, walletCount);

	*meeples = 5;

	cout << total << endl;

	//for (int i = 0; i < walletCount; ++i)
	//{
	//	wallets[i] = i + 1;
	//}

	//for (int i = 0; i < walletCount; ++i)
	//{
	//	cout << wallets[i] << endl;
	//}

	delete meeples;
	delete[] wallets;
	delete[] noWallets;

	int * something = new int;
	*something = 55;
	delete something;
	something = nullptr;

	//if NOT null
	if (something != nullptr)
	{
		cout << *something << endl;
	}
	else
	{
		cout << "Somethiong was null" << endl;
	}
}

void printFloatArray(float * arr, int size)
{
	for (int i = 0; i < (int)size; ++i)
	{
		cout << arr[i] << endl;
	}
}

int sumIntArray(int * arr, int size)
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	return sum;
}

void boolInit(bool * arr, int size, bool defaultValue)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = defaultValue;
		cout << arr[i] << endl;
	}
}

void loveNumbers()
{
	int userCount = 0;

	cout << "How many numbers?" << endl;
	cin >> userCount;

	int * userArr = new int[userCount];

	for (int i = 0; i < userCount; ++i)
	{
		cout << "Please enter number " << i + 1 << endl;
		cin >> userArr[i];
	}
	
	cout << "Your number list is: " << endl;

	for (int i = 0; i < userCount; ++i)
	{
		cout << userArr[i] << endl;
	}
}

int * duplicateArray(int * origArr, int size)
{
	int * newArr = new int[size];
	newArr = origArr;
	return newArr;
}

void intSubArray(int * arr, int size, int idxOne, int idxTwo)
{
	int range = idxTwo - idxOne;

	int * newArr = new int[range];

	for (int i = 0; i <= range; ++i)
	{
		newArr[i] = arr[idxOne];
		idxOne++;
		cout << newArr[i] << endl;
	}
}

char * toElement(char * arr, int size, char target, bool caseSensitive)
{
	for (int i = 0; i < size; ++i)
	{
		if (caseSensitive == true)
		{
			if (arr[i] == target)
			{
				return &arr[i];
			}
		}
		else
		{
			if (arr[i] == target || arr[i] == target + 32 || arr[i] == target - 32)
			{
				return &arr[i];
			}
		}
	}
	return nullptr;
}

void pointerSwap(int numOne, int numTwo)
{
	int * a = &numOne;
	int * b = &numTwo;
	int * c = new int;

	c = a;
	a = b;
	b = c;

	cout << numOne << endl;
	cout << numTwo << endl;
	cout << endl;
	cout << *a << endl;
	cout << *b << endl;
}

int main()
{
	//example();

	int * intArray = new int[5] { 3, 7, 5, 9, 1 };
	float * floatArray = new float[5] { 2.1, 4.7, 8.4, 3.5, 7.6 };
	char * charArray = new char[5]{ 'a', 'b', 'c', 'B', 'e' };
	bool * boolArray = new bool[3] { false, true, false };

	//printFloatArray(floatArray, 5);

	//cout << sumIntArray(intArray, 5) << endl;

	//boolInit(boolArray, 3, true);

	//cout << zeroArray(10) << endl;

	//loveNumbers();

	//cout << duplicateArray(intArray, 5) << endl;

	//intSubArray(intArray, 5, 1, 3);

	//cout << toElement(charArray, 5, 'B', false) << endl;
	//cout << &charArray[1] << endl;

	//pointerSwap(3, 5);

	delete[] intArray;
	delete[] floatArray;
	delete[] charArray;
	delete[] boolArray;

	while(true) {}

	return 0;
}