#pragma once
#include "Ship.h"
class CruiseShip : public Ship
{
	int m_maxPassengers;
public:
	CruiseShip();
	CruiseShip(string n, string y, int mP);
	~CruiseShip();
	void print();
};

