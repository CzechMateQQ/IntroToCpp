#pragma once

struct student
{
	int studentID;
	int course;
	int score;

	void addData(int _studentID, int _course, int _score);
	void printStudent();
};
int avgScore(student info[], size_t size);
int medScore(student info[], size_t size);
int courseTotal(student info[], size_t size, int _course);