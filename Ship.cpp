#include "Ship.h"

Ship::Ship() {
	m_name = "";
	m_year = "";
}
Ship::Ship(string n, string y) {
	m_name = n;
	m_year = y;
}
Ship::~Ship() {}

void Ship::print() {
	cout << "Ship Name: " << m_name << endl;
	cout << "Year Constructed: " << m_year << endl;
}