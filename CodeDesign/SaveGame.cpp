#include "SaveGame.h"

SaveGame::SaveGame()
{
}

void SaveGame::Options()
{
	std::fstream file;
	std::string buffer;
	std:: string buffest;
	bool running = true;
	int choice = 0;

	while (running)
	{
		cout << "Select option...\n"
			"1) Edit values and save to file\n"
			"2) Read file to SaveGame class and print\n"
			"3) Close application" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: cout << "Enter 'num' value:" << endl;
			cin >> num;
			cout << "Enter 'decicmal' value:" << endl;
			cin >> decimal;
			cout << "Enter 'maybe' value:" << endl;
			cin >> maybe;
			cout << "Enter 'charizard' value:" << endl;
			cin >> charizard;

			file.open("Save.txt", std::ios::out);
			file.clear();
			file << num << endl << decimal << endl << maybe << endl << charizard << endl;
			file.flush();
			file.close();
			break;

		case 2: file.open("Save.txt", std::ios::in);
			getline(file, buffest);
			num = atoi(buffest.c_str());
			getline(file, buffest);
			decimal = atof(buffest.c_str());
			getline(file, buffest);
			maybe = atoi(buffest.c_str());
			getline(file, buffest);
			charizard = buffest.c_str()[0];

			cout << num << endl << decimal << endl << maybe << endl << charizard << endl;
			system("pause");
			file.close();
			break;

		case 3: running = false;
			break;
		}
	}
}

SaveGame::~SaveGame()
{
}
