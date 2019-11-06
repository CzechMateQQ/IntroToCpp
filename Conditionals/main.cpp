#include <iostream>

using std::cout;
using std::cin;
using std::endl;

	void AgeGate()
	{
		int userAge = 0;

		cout << "Please enter your age:" << endl;
		cin >> userAge;

		if (userAge < 18)
		{
			cout << "You are a minor, no alcohol for you" << endl;
		}

		else
		{
			cout << "You are an adult. ";

			if (userAge >= 50)
			{
				cout << "You are also old enough to join AARP. ";

				if (userAge >= 65)
				{
					cout << "You are also elegible for retirement benefits.";
				}
			}
		}
	}

	//Smallest of any Number of Numbers
	void SmallestNumber()
	{
		int quantity = 0;

		cout << "Please enter how many numbers you would like to check:" << endl;
		cin >> quantity;

		cout << "Please enter " << quantity << " numbers" << endl;

		for (int i = 0; i < quantity; ++i)
		{

		}
	}

	void EvenOrOdd()
	{
		int userNumber = 0;

		cout << "Please enter a whole number:" << endl;
		cin >> userNumber;

		if (userNumber % 2 == 0)
		{
			cout << "Your number is even." << endl;
		}
		else
		{
			cout << "Your number is odd." << endl;
		}
	}

	//From 1 to 100
	void ToOneHundred()
	{
		int num = 100;
		while (num > 0)
		{
			cout << num << endl;
			num--;
		}
	}

	void LeapYear()
	{
		for (int i = 0; i < 3001; ++i)
		{
			if (i % 4 != 0)
			{
				continue;
			}
			cout << i << endl;
		}
	}

	//From 1995 to 2019
	void YearGap()
	{
		int year = 1995;
		do
		{
			cout << year << endl;
			year++;
		} while (year <= 2019);
	}


	void MultiplesOfFive()
	{
		int multipleOne = 0;
		int multipleTwo = 0;

		cout << "Please enter the first multiple followed by the second:" << endl;
		cin >> multipleOne >> multipleTwo;

		for (int i = multipleOne; i <= multipleTwo; ++i)
		{
			int result = i * 5;
			cout << result << endl;
		}
	}

	void NumberClamp()
	{
		int userNum = 0;

		cout << "Please enter a number:" << endl;
		cin >> userNum;

		if (userNum < 15)
		{
			userNum = 15;
			cout << userNum << endl;
		}
		else if (userNum > 30)
		{
			userNum = 30;
			cout << userNum << endl;
		}
		else
		{
			cout << userNum << endl;
		}
	}


	int main()
	{
		AgeGate();

		SmallestNumber();

		EvenOrOdd();

		ToOneHundred();

		LeapYear();

		YearGap();

		MultiplesOfFive();

		NumberClamp();

		while (true) {}
		//system("pause");

		return 0;
	}


	////CONDITIONALS

	//int num = 9001;
	//bool shouldJoke = true;

	//if (num > 100)
	//{
	//	std::cout << "That's a big number.";
	//}
	//else if (num > 0)
	//{
	//	std::cout << "That's a small number.";
	//}
	//else
	//{
	//	std::cout << "Negatives?!";
	//}

	//std::cout << std::endl;

	//if (num == 1 && shouldJoke)
	//{
	//	std::cout << "One is a lonely number.";
	//}

	////Loop Examples

	//int num = 0;

	//while (num < 5)
	//{
	//	cout << num << endl;
	//}

	//int num = 0;
	//do
	//{
	//	cout << num << endl;
	//} while (num < 5);

	//for (int i = 0; i < 5; ++i)
	//{
	//	cout << i << endl;
	//}

	////1 to 100)	

	//for (int i = 1; i < 101; ++i)
	//{
	//	cout << i << endl;
	//}