// Lab2-Structures.cpp
// ///////////////////////////////////////////////////////////////////
// Developer: Joshua Hughes
// Student ID: 400298496
// Purpose: to store and output a series of variables as described below.
// Functions: main( ) - main program,
// Authorship: I, Joshua Hughes, student number 400298496, certify that this material
// is my original work. No other person's work has been used without due acknowledgement
// and I have not made my work available to anyone else
//////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
struct Weather {
	int rain;
	int highTemp;
	int lowTemp;
	int avgTemp;
};
int main() {
	struct Weather months[12];
	int totalAvgRain;
	int totalAvgTemp;
	int totalRain;
	int highestTemp;
	int highTempMonth;
	int lowestTemp;
	int lowTempMonth;
	for (int i = 0; i < 12; i++) {
		if (i == 0) {
			cout << "\nMonth of January\n";
		}
		else if (i == 1) {
			cout << "\nMonth of February\n";
		}
		else if (i == 2) {
			cout << "\nMonth of March\n";
		}
		else if (i == 3) {
			cout << "\nMonth of April\n";
		}
		else if (i == 4) {
			cout << "\nMonth of May\n";
		}
		else if (i == 5) {
			cout << "\nMonth of June\n";
		}
		else if (i == 6) {
			cout << "\nMonth of July\n";
		}
		else if (i == 7) {
			cout << "\nMonth of August\n";
		}
		else if (i == 8) {
			cout << "\nMonth of September\n";
		}
		else if (i == 9) {
			cout << "\nMonth of October\n";
		}
		else if (i == 10) {
			cout << "\nMonth of November\n";
		}
		else {
			cout << "\nMonth of December\n";
		}
		cout << "Please enter the amount of rain that fell in the month (cm) : ";
			cin >> months[i].rain;
		while (true) {
			while (true) {
				cout << "Please enter the highest temperature in the month (F) : ";
					cin >> months[i].highTemp;
				if (months[i].highTemp < -100 || months[i].highTemp > 140)
				{
					cout << "Invalid temperature.\n";
					continue;
				}
				else {
					break;
				}
			}
			while (true) {
				cout << "Please enter the lowest temperature in the month (F) : ";
					cin >> months[i].lowTemp;
				if (months[i].lowTemp < -100 || months[i].lowTemp > 140) {
					cout << "Invalid temperature.\n";
					continue;
				}
				else {
					break;
				}
			}
			if (months[i].highTemp < months[i].lowTemp) {
				cout << "The high and low temperatures are not possible.\n";
					continue;
			}
			else {
				break;
			}
		}
		months[i].avgTemp = (months[i].highTemp - months[i].lowTemp) / 2;
	}
	cout << "\nThe average monthly rainfall for the year is: ";
	totalAvgRain = (months[0].rain + months[1].rain + months[2].rain + months[3].rain + months[4].rain + months[5].rain + months[6].rain + months[7].rain + months[8].rain + months[9].rain + months[10].rain + months[11].rain) / 12;
	cout << totalAvgRain << "cm\n";
	cout << "The total rainfall for the year is: ";
	totalRain = months[0].rain + months[1].rain + months[2].rain + months[3].rain + months[4].rain + months[5].rain + months[6].rain + months[7].rain + months[8].rain + months[9].rain + months[10].rain + months[11].rain;
	cout << totalRain << "cm\n";
	cout << "The highest temperature this year was: ";
	highestTemp = months[0].highTemp;
	lowestTemp = months[0].lowTemp;
	for (int i = 0; i < 12; i++) {
		if (months[i].highTemp > highestTemp) {
			highestTemp = months[i].highTemp;
			highTempMonth = i;
		}
	}
	for (int i = 0; i < 12; i++) {
		if (months[i].lowTemp < lowestTemp) {
			lowestTemp = months[i].lowTemp;
			lowTempMonth = i;
		}
	}
	cout << highestTemp << " degrees F and happened during ";
	if (highTempMonth == 0) {
		cout << "January.\n";
	}
	else if (highTempMonth == 1) {
		cout << "February\n";
	}
	else if (highTempMonth == 2) {
		cout << "March\n";
	}
	else if (highTempMonth == 3) {
		cout << "April\n";
	}
	else if (highTempMonth == 4) {
		cout << "May\n";
	}
	else if (highTempMonth == 5) {
		cout << "June\n";
	}
	else if (highTempMonth == 6) {
		cout << "July\n";
	}
	else if (highTempMonth == 7) {
		cout << "August\n";
	}
	else if (highTempMonth == 8) {
		cout << "September\n";
	}
	else if (highTempMonth == 9) {
		cout << "October\n";
	}
	else if (highTempMonth == 10) {
		cout << "November\n";
	}
	else {
		cout << "December\n";
	}
	cout << "The lowest temperature was: " << lowestTemp << " degrees F and happened during ";
		if (lowTempMonth == 0) {
			cout << "January.\n";
		}
		else if (lowTempMonth == 1) {
			cout << "February\n";
		}
		else if (lowTempMonth == 2) {
			cout << "March\n";
		}
		else if (lowTempMonth == 3) {
			cout << "April\n";
		}
		else if (lowTempMonth == 4) {
			cout << "May\n";
		}
		else if (lowTempMonth == 5) {
			cout << "June\n";
		}
		else if (lowTempMonth == 6) {
			cout << "July\n";
		}
		else if (lowTempMonth == 7) {
			cout << "August\n";
		}
		else if (lowTempMonth == 8) {
			cout << "September\n";
		}
		else if (lowTempMonth == 9) {
			cout << "October\n";
		}
		else if (lowTempMonth == 10) {
			cout << "November\n";
		}
		else {
			cout << "December\n";
		}
	cout << "The average temperature for the year was: ";
	totalAvgTemp = (months[0].avgTemp + months[1].avgTemp + months[2].avgTemp + months[3].avgTemp + months[4].avgTemp + months[5].avgTemp + months[6].avgTemp + months[7].avgTemp + months[8].avgTemp + months[9].avgTemp + months[10].avgTemp + months[11].avgTemp) / 12;
	cout << totalAvgTemp << " degrees F.";
	return 0;
}