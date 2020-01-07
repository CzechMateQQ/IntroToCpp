#include <iostream>
#include <fstream>
#include <string>
#include "SaveGame.h"

using std::cout;
using std::cin;
using std::endl;

bool open = true;

bool fileExists(const char *fileName)
{
	std::ifstream infile(fileName);
	return infile.good();
}

int main()
{
	//std::fstream file;

	//if (!fileExists("MyLog.txt"))
	//{
	//	file.open("MyLog.txt", std::ios::out);
	//}
	//else
	//{
	//	file.open("MyLog.txt", std::ios::in);
	//}

	//if (!file.is_open())
	//{
	//	std::cerr << "'MyLog' file error" << endl;
	//	return -1;
	//}

	//file.close();

	//while (open)
	//{
	//	std::string options = "Would you like to...\n"
	//		"1) Display file\n"
	//		"2) Write to file\n"
	//		"3) Clear the file\n"
	//		"4) Exit program";

	//	cout << options.c_str() << endl;

	//	int userChoice = 0;
	//	cin >> userChoice;
	//	file.clear();
	//	cin.ignore(10000, '\n');
	//	std::string buffer;
	//	std::string writeTo;

	//	switch (userChoice)
	//	{
	//	case 1: file.open("MyLog.txt", std::ios::in);
	//			while (std::getline(file, buffer))
	//			{
	//				cout << buffer << endl;
	//			}
	//			system("pause");
	//			file.close();
	//			break;

	//	case 2: file.open("MyLog.txt", std::ios::app);
	//			cout << "Enter text to be appended:" << endl;
	//			std::getline(cin, writeTo);
	//			file.clear();
	//			file << writeTo;
	//			file.flush();
	//			file.close();
	//			break;

	//		case 3: file.open("MyLog.txt", std::ios::out);
	//			file.close();
	//			cout << "Text file cleared" << endl;
	//			system("pause");
	//			break;

	//		case 4: open = false;
	//			break;
	//	}
	//	system("CLS");
	//}

	SaveGame test;
	test.Options();

	while (true){}

	return 0;
}