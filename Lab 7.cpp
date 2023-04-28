// Lab 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
// ///////////////////////////////////////////////////////////////////
// Developer: Joshua Hughes
// Student ID: 400298496
// Authorship: I, Joshua Hughes, student number 400298496, certify that this material
// is my original work. No other person's work has been used without due acknowledgement
// and I have not made my work available to anyone else
//////////////////////////////////////////////////////////////////

#include <iostream>
#include "Ship.h"
#include "CargoShip.h"
#include "CruiseShip.h"
using namespace std;

int main()
{
    int numShips = 4;
    int numCruise = 3;
    int numCargo = 3;
    Ship *ships[10];

    for (int i = 0; i < (numShips + numCruise + numCargo); i++) {
        if (i < numShips) {
            string temp = "";
            while (temp != "default" && temp != "custom") {
                cout << "Would you like to make a default ship or a custom ship? (default/custom): ";
                getline(cin, temp);
            }
            if (temp == "default") {
                Ship *temp1 = new Ship;
                ships[i] = temp1;
            }
            else {
                string name;
                string year;
                cout << "Enter the name of the ship: ";
                getline(cin, name);
                cout << "Enter the year the ship was constructed: ";
                getline(cin, year);
                Ship *temp1 = new Ship(name, year);
                ships[i] = temp1;
            }
        }
        else if (i >= numShips && i < (numShips + numCruise)) {
            string temp = "";
            while (temp != "default" && temp != "custom") {
                cout << "Would you like to make a default cruise ship or a custom cruise ship? (default/custom): ";
                getline(cin, temp);
            }
            if (temp == "default") {
                CruiseShip *temp1 = new CruiseShip;
                ships[i] = temp1;
            }
            else {
                string name;
                string year;
                int maxPassengers;
                cout << "Enter the name of the ship: ";
                getline(cin, name);
                cout << "Enter the year the ship was constructed: ";
                getline(cin, year);
                cout << "Enter the max number of passengers the cruise ship can hold: ";
                cin >> maxPassengers;
                cin.ignore();
                CruiseShip *temp1 = new CruiseShip(name, year, maxPassengers);
                ships[i] = temp1;
            }
        }
        else {
            string temp = "";
            while (temp != "default" && temp != "custom") {
                cout << "Would you like to make a default cargo ship or a custom cargo ship? (default/custom): ";
                getline(cin, temp);
            }
            if (temp == "default") {
                CargoShip* temp1 = new CargoShip;
                ships[i] = temp1;
            }
            else {
                string name;
                string year;
                int capacity;
                cout << "Enter the name of the ship: ";
                getline(cin, name);
                cout << "Enter the year the ship was constructed: ";
                getline(cin, year);
                cout << "Enter the max number tonnes the cargo ship can hold: ";
                cin >> capacity;
                cin.ignore();
                CargoShip* temp1 = new CargoShip(name, year, capacity);
                ships[i] = temp1;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        ships[i]->print();
    }
}