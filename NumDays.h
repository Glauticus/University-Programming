#pragma once
#include <iostream>
using namespace std;

class NumDays
{
	float m_hoursWorked;
	float m_daysWorked;
public:
	NumDays();
	NumDays(float h);
	~NumDays();
	float getHoursWorked() { return m_hoursWorked; };
	void setHoursWorked(float h) { m_hoursWorked = h; };
	float getDays() { return m_daysWorked; };
	NumDays operator+(NumDays n);
	NumDays operator-(NumDays n);
	NumDays operator++();
	NumDays operator++(int dummy);
	NumDays operator--();
	NumDays operator--(int dummy);
};

ostream& operator<<(ostream& stream, NumDays n);