// MoreAboutClasses - Lab5 - q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ///////////////////////////////////////////////////////////////////
// Developer: Joshua Hughes
// Student ID: 400298496
// Purpose: 
// Authorship: I, Joshua Hughes, student number 400298496, certify that this material
// is my original work. No other person's work has been used without due acknowledgement
// and I have not made my work available to anyone else
//////////////////////////////////////////////////////////////////

#include <iostream>
#include "Dog.h";
using namespace std;

int main()
{
	Dog gr("Golden Retriever", "Male", "Adult", 1);
	Dog lr("Labrador Retriever", "Female", "Adult", 1);
	Dog gs1("German Shepherd", "Fixed", "Adult", 1);
	Dog gs2("German Shepherd", "Fixed", "Adult", 1);

	Dog pup1 = gr + lr;
	Dog pup2 = gs1 + gs2;
	cout << "After breeding the male golden retriever with the female labrador retriever, we got a: " << endl;
	cout << pup1.getSex() << " " << pup1.getBreed() << " Age: " << pup1.getAge() << " Maturity: " << pup1.getMaturity() << endl << endl;
	cout << "After breeding the fixed german shepherd with the fixed german shepherd, we got a: " << endl;
	cout << pup2.getSex() << " " << pup2.getBreed() << " Age: " << pup2.getAge() << " Maturity: " << pup2.getMaturity();
}
