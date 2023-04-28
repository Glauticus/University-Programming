#pragma once
#include <iostream>
using namespace std;

class Dog
{
	string m_breed;
	string m_sex;
	string m_maturity;
	int m_age;
public:
	Dog();
	Dog(string b, string s, string m, int a);
	~Dog();
	void setBreed(string b) { m_breed = b; };
	void setSex(string s) { m_sex = s; };
	void setMaturity(string m) { m_maturity = m; };
	void setAge(int a) { m_age = a; };
	string getBreed() { return m_breed; };
	string getSex() { return m_sex; };
	string getMaturity() { return m_maturity; };
	int getAge() { return m_age; };
	void fixDog() { m_sex = "Fixed"; };
	Dog operator+(Dog d);
};

