#include "NumDays.h"

NumDays::NumDays() {
	m_hoursWorked = 0;
	m_daysWorked = 0;
}

NumDays::NumDays(float h) {
	m_hoursWorked = h;
	m_daysWorked = h / 8;
}

NumDays::~NumDays() {}

NumDays NumDays::operator+(NumDays n) {
	float hours = m_hoursWorked + n.getHoursWorked();
	NumDays tmp(hours);
	return tmp;
}

NumDays NumDays::operator-(NumDays n) {
	float hours = m_hoursWorked - n.getHoursWorked();
	NumDays tmp(hours);
	return tmp;
}

NumDays NumDays::operator++() {
	m_hoursWorked = m_hoursWorked + 1;
	m_daysWorked = m_hoursWorked / 8;
	return NumDays(m_hoursWorked);
}

NumDays NumDays::operator++(int dummy) {
	NumDays n = NumDays(m_hoursWorked);
	m_hoursWorked = m_hoursWorked + 1;
	m_daysWorked = m_hoursWorked / 8;
	return n;
}

NumDays NumDays::operator--() {
	m_hoursWorked = m_hoursWorked - 1;
	m_daysWorked = m_hoursWorked / 8;
	return NumDays(m_hoursWorked);
}

NumDays NumDays::operator--(int dummy) {
	NumDays n = NumDays(m_hoursWorked);
	m_hoursWorked = m_hoursWorked - 1;
	m_daysWorked = m_hoursWorked / 8;
	return n;
}

ostream& operator<<(ostream& stream, NumDays n) {
	int days = n.getDays();
	int hours = n.getHoursWorked();
	hours = hours % 8;
	stream << days << " days " << hours << " hours." << endl;
	return stream;
}