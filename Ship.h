#pragma once
#include <string>
#include <iostream>
using namespace std;

class Ship
{
protected:
	string m_name;
	string m_year;
public:
	Ship();
	Ship(string n, string y);
	~Ship();
	virtual void print();
};

