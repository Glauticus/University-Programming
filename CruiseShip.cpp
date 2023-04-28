#include "CruiseShip.h"

CruiseShip::CruiseShip() {
	m_maxPassengers = 0;
}
CruiseShip::CruiseShip(string n, string y, int mP) : Ship(n, y) {
	m_maxPassengers = mP;
}
CruiseShip::~CruiseShip() {}

void CruiseShip::print() {
	Ship::print();
	cout << "Max Passengers: " << m_maxPassengers << endl;
}