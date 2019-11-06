#include <iostream>
#include <cstring>
#include <stdio.h>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;


void Greeting()
{	
	char userName[15];

	cout << "Please enter your name:" << endl;
	cin >> userName;

	cout << "Hello " << userName << "!" << endl;
}

void FavoriteColor()
{
	char userColor[10];
	char red[] = "red";
	char blue[] = "blue";
	char yellow[] = "yellow";
	
	cout << "Please enter your favorite color:" << endl;
	cin >> userColor;

	for (int i = 0; i < strlen(userColor); ++i)
	{
		userColor[i] = tolower(userColor[i]);
	}

	if (strcmp(userColor, red) == 0)
	{
		cout << "Red is my favorite color too!" << endl;
	}

	else if (strcmp(userColor, blue) == 0)
	{
		cout << "Like the oceans and sky." << endl; 
	}

	else if (strcmp(userColor, yellow) == 0)
	{
		cout << "Don't eat yellow snow." << endl;
	}

	else
	{
		cout << "I don't know that color ):" << endl;
	}
}

void ToUpper()
{
	char userPhrase[20];

	cout << "Please enter a word or phrase to be capitalized:" << endl;
	cin.getline(userPhrase, 20);

	for (int i = 0; i < strlen(userPhrase); ++i)
	{
		userPhrase[i] = toupper(userPhrase[i]);
	}
	cout << userPhrase << endl;
}

void Whitespace()
{
	char userPhrase[25];

	cout << "Please enter a phrase with spaces:" << endl;
	cin.getline(userPhrase, 25);

	for (int i = 0; i < strlen(userPhrase); ++i)
	{
		if (userPhrase[i] == ' ')
		{
			i += strlen(userPhrase) - i;
		}
	}
	cout << userPhrase << endl;
}

int main()
{
	//Greeting();

	//FavoriteColor();

	//ToUpper();

	Whitespace();

	while(true) {}

	return 0;
}