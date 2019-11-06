#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	//VARIABLES AND OPERATORS

	cout << 5 << 0 << 5 << "\n";

	int age = -1;
	cout << "What is your age?" << endl;
	cin >> age;
	cout << "Your age is " << age << endl;

	//A)
	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	cout << "A) " << numberA << endl;

	//B)
	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	cout << "\nB) " << numberB << endl;

	//C)
	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;
	cout << "\nC) " << numberC << endl;

	//D)
	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	cout << "\nD) " << somethingD << endl;

	//E)
	int x = 13;

	x = x / 2;

	cout << "\nE) " << x << endl;

	//F)
	float y = 13;

	y = y / 2;

	cout << "\nF) " << y << endl;

	//Celcius to Fahrenheit)
	float degCelsius;
	cout << "\nEnter temp in Celsius: " << endl;
	std::cin >> degCelsius;
	float degFahrenheit = 0.0f;

	degFahrenheit = ((degCelsius * 9) / 5) + 32;

	cout << "\nCelsius to Fahrenheit)" << endl;
	cout << "Celsius: " << degCelsius << endl;
	cout << "Fahrenheit: " << degFahrenheit << endl;

	//Area of Rectangle)
	float width = 0.0f;
	float height = 0.0f;
	float area = 0.0f;

	cout << "\nPlease enter rectangle width followed by the height:" << endl;
	cin >> width >> height;

	area = width * height;

	cout << "\nArea of rectangle)" << endl;
	cout << "Width: " << width << ", Height: " << height << endl;
	cout << "Area: " << area << endl;

	//Average of Five)
	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0;

	cout << "\nPlease enter five numbers: " << endl;
	cin >> a >> b >> c >> d >> e;

	avg = (a + b + c + d + e) / 5;

	cout << "\nAverage of Five)" << endl;
	cout << a << "," << b << "," << c << "," << d << "," << e << endl;
	cout << "The average is: " << avg << endl;

	//NumberSwap)
	int x = 0;
	int y = 0;

	cout << "Please enter two numbers, x followed by y:" << endl;
	cin >> x >> y;

	int z = x;

	x = y;
	y = z;

	cout << "\nNumber Swap)" << endl;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;

	//Fun Age Facts)
	int userAge = 0;

	cout << "Please enter your age: " << endl;
	cin >> userAge;

	int months = 0;
	float decades = 0.0f;
	int japanLife = 0;
	int usLife = 0;

	months = userAge * 12;
	decades = (float)userAge / 10;
	japanLife = 84 - userAge;
	usLife = 79 - userAge;

	cout << "\nFun Age Facts)\n" << "You are " << userAge << " years old\n" << endl;
	cout << "You have been alive for " << months << " months!" << endl;
	cout << "You have been alive for " << decades << " decades!" << endl;
	cout << "You would have approximately " << japanLife << " years left to live in Japan" << endl;
	cout << "You would have approximately " << usLife << " years left to live in the US" << endl;

	//Handling Errors)
	int favNum = -1;

	while(favNum == -1)
	{
		cout << "Please enter your favorite number:" << endl;
		cin >> favNum;

		if (favNum >= 0 && !cin.fail())
		{
			cout << "Your favorite number is: " << favNum << "\nCool!" << endl;
		}

		else
		{
			cout << "Invalid input, please try again:" << endl;
			favNum = -1;
			if (cin.fail())
			{
				cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
	}

	while (true) {}
	//system("pause");

	return 0;
}