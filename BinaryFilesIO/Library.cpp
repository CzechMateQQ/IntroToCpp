#include "Library.h"



Library::Library()
{
}

void Library::loadRecords()
{
	file.open("library.dat", ios::in | ios::binary);
	if (file.is_open())
	{
		file.read((char*)records, sizeof(*records));
		file.close();
	}
	else
	{
		file.open("library.txt", ios::out);
		file.close();
		if (!file.is_open())
		{
			std::cerr << "'library' file error" << endl;
		}
		else
		{
			file.open("library.txt", ios::in);
			for (int i = 0; i < entries; ++i)
			{
				getline(file, buffer);		libData[0] = buffer;
				getline(file, buffer);		libData[1] = buffer;
				getline(file, buffer);		libData[2] = buffer;
				getline(file, buffer);		libData[3] = buffer;
				getline(file, buffer);		libData[4] = buffer;
				getline(file, buffer);		libData[5] = buffer;
				file.flush();
				file.clear();
			}
			file.close();

			file.open("library.dat", ios::out | ios::binary);
			file.write((char*)records, sizeof(*records));
			file.close();
		}
	}
}

void Library::saveRecords()
{
	file.open("library.dat", ios::out | ios::binary);
	file.write((char*)records, sizeof(*records));
	file.close();
}

void Library::findRecord()
{
	bool fail = true;
	char selection[9];
	cout << "Enter call number of book:" << endl;
	cin >> selection;
	file.open("library.txt", ios::in);
	file.read((char*)records, sizeof(*records));
	while (fail)
	{
		if (selection == records->callNum)
		{
			system("pause");
			file.close();
			fail = false;
		}
		else
		{
			cout << "Entry not found, please try again:" << endl;
			cin >> selection;
			fail = true;
		}
	}
}

void Library::displayRecord()
{

}

void Library::updateRecord()
{

}

void Library::addRecord()
{

}

Library::~Library()
{
}
