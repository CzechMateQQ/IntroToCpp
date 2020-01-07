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

protected:
	std::fstream file;
	string buffer;
	string callNum;
	string title;
	string author;

	int bookStatus = 0;
	string dueDate;
	string borrower;
};

