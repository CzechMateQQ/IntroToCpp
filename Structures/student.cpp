#include "student.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void student::addData(int _studentID, int _course, int _score)
{
 	studentID = _studentID;
	course = _course;
	score = _score;	
}

void student::printStudent()
{
	cout << "Student ID: " << studentID << endl;
	cout << "Course Number: " << course << endl;
	cout << "Test Score: " << score << endl;
}

int avgScore(student info[], size_t size)
{
	int total = 0;
	for (int i = 0; i < size; ++i)
	{
		total += info[i].score;
	}
	return total / size;
}

int medScore(student info[], size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (info[i].score > info[j].score)
			{
				int temp = info[i].score;
				info[i].score = info[j].score;
				info[j].score = temp;
			}
		}
	}

	if (size % 2 == 0)
	{
		return (info[(size / 2) - 1].score + info[(size / 2)].score) / 2;
	}

	else
	{
		return info[(size / 2)].score;
	}
}

int courseTotal(student info[], size_t size, int _course)
{
	int total = 0;
	for (int i = 0; i < size; ++i)
	{
		if (info[i].course == _course)
		{
			total++;
		}
	}
	return total;
}