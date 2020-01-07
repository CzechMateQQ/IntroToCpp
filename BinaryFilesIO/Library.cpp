#include "Library.h"



Library::Library()
{
}

void Library::loadRecords()
{
	file.open("library.dat", std::ios::in | std::ios::binary);
	if (file.is_open())
	{
		file.read((char*)&buffer, sizeof(Library));
		file.close();
	}
	else
	{
		file.open("library.txt", std::ios::out);
		if (!file.is_open())
		{
			std::cerr << "'library' file error" << endl;
		}
		else
		{

		}
	}
}

void Library::saveRecords()
{

}

void Library::findRecord()
{

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
