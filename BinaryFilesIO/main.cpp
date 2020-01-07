#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <string.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ios;

struct LibraryData
{
	char callNum[9];
	char title[20];
	char author[20];
	int bookStatus = 0;
};

std::fstream txtFile;
std::fstream binFile;
std::string buffer;

void loadRecords(LibraryData* _records, size_t numBooks)
{
	binFile.open("library.dat", ios::in | ios::binary);
	if (binFile.is_open())
	{
		binFile.read((char*)_records, sizeof(*_records));
		binFile.close();
	}
	else
	{
		binFile.close();
		txtFile.open("library.txt", ios::out);
		txtFile.close();
		if (!txtFile.is_open())
		{
			std::cerr << "'library' file error" << endl;
		}
		else
		{
			txtFile.open("library.txt", ios::in);
			for (int i = 0; i < numBooks; ++i)
			{
				getline(txtFile, buffer);		
				getline(txtFile, buffer);		
				getline(txtFile, buffer);		
				getline(txtFile, buffer);		
				getline(txtFile, buffer);		
				getline(txtFile, buffer);		
				txtFile.flush();
				txtFile.clear();
			}
			txtFile.close();

			binFile.open("library.dat", ios::out | ios::binary);
			binFile.write((char*)_records, sizeof(*_records));
			binFile.close();
		}
	}
}

void saveRecords()
{

}

void findRecord()
{

}

void displayRecord()
{

}

void updateRecord()
{

}

void addRecord()
{

}

int main()
{


	while(true){}

	return 0;
}