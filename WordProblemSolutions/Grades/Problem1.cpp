Problem1.cpp

#pragma once
#include <iostream>

using namespace std;

int main()
{
	float student_grade = 0;
	cout << "What grade has the student got?" << endl;
	cin >> student_grade;

	cout << "After a thorough check by the teacher, she decided to factor\t";
	student_grade += 5;
	cout << "by 5 points, the new grade is: " << student_grade << endl;

	return NULL;
}

