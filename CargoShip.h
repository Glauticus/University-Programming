#pragma once
#include "Ship.h"
class CargoShip : public Ship
{
	int m_capacity;
public:
	CargoShip();
	CargoShip(string n, string y, int c);
	~CargoShip() {};
	void print();
};

