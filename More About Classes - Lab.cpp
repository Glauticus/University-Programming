// MoreAboutClasses - Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ///////////////////////////////////////////////////////////////////
// Developer: Joshua Hughes
// Student ID: 400298496
// Purpose: 
// Authorship: I, Joshua Hughes, student number 400298496, certify that this material
// is my original work. No other person's work has been used without due acknowledgement
// and I have not made my work available to anyone else
//////////////////////////////////////////////////////////////////

#include <iostream>
#include "NumDays.h"
using namespace std;

int main()
{
	NumDays worker1(23);
	NumDays worker2(18);
	cout << "Worker 1: " << worker1;
	cout << "Worker 2: " << worker2 << endl;
	NumDays worker3((worker1 + worker2));
	cout << "Worker 1 + Worker 2: " << worker3;
	NumDays worker4((worker1 - worker2));
	cout << "Worker 1 - Worker 2: " << worker4 << endl;
	worker1++;
	worker1++;
	cout << "Worker 1 after Incrementing Twice: " << worker1;
	worker2--;
	worker2--;
	worker2--;
	cout << "Worker 2 after Deincrementing Thrice: " << worker2 << endl;
}