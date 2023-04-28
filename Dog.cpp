#include "Dog.h"

Dog::Dog() {
	m_breed = "";
	m_sex = "";
	m_maturity = "";
	m_age = 0;
}

Dog::Dog(string b, string s, string m, int a) {
	m_breed = b;
	m_sex = s;
	m_maturity = m;
	m_age = a;
}

Dog::~Dog() {}

Dog Dog::operator+(Dog d) {
	if (m_sex == "Fixed" || d.getSex() == "Fixed") {
		Dog pup;
		return pup;
	}
	else if (m_sex == d.getSex()) {
		Dog pup;
		return pup;
	}
	else {
		string b;
		if (m_breed == d.getBreed()) {
			b = m_breed;
		}
		else {
			b = "Cross";
		}
		string s = "Female";
		string m = "Puppy";
		int a = 0;
		Dog pup(b, s, m, a);
		return pup;
	}
}