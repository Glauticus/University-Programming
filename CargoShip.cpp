#include "CargoShip.h"

CargoShip::CargoShip() {
	m_capacity = 0;
}
CargoShip::CargoShip(string n, string y, int c) : Ship(n, y) {
	m_capacity = c;
}
void CargoShip::print() {
	Ship::print();
	cout << "Cargo Capacity: " << m_capacity << endl;
}