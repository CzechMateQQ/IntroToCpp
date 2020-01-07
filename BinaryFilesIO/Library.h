#pragma once
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


class Library
{
public:
	Library();
	void loadRecords();
	void saveRecords();
	void findRecord();
	void displayRecord();
	void updateRecord();
	void addRecord();
	~Library();

	struct LibraryData
	{
		char** libData = new char*[6];
		char callNum[9] = libData[0];
		char title[20] = libData[1];
		char author[20] = libData[2];
		char bookStatus[1] = libData[3];
		char dueDate[10] = libData[4];
		char borrower[20] = libData[5];
	};

protected:
	std::fstream file;
	string buffer;
	int entries = 0;
	LibraryData* records = new LibraryData[entries];
};

