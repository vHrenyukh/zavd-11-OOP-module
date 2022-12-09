#include "Alcohol1.h"
#include <fstream>
#include <string>
int main() {

	string menu;
	bool ProgramIsRunning = true;
	Alcohol1 alcohol1(64, 2);
	Liquid lqd(0.000971, 1.024);

	while (ProgramIsRunning) {
		cout << "Choose from the menu: " << endl;
		cout << "1. Set the name of the liquid: " << endl
			<< "2. Get the destiny od the liquid: " << endl
			<< "3. Get the strength of the alcohol" << endl;

		cout << "Enter the number: ";
		getline(cin, menu);
		cout << endl;

		string casesOfTheMenu;
		switch (stoi(menu)) {
		case 1:
			cout << "The name of the destiny: ";
			getline(cin, casesOfTheMenu);
			break;

		case 2:
			cout << "The destiny of the liquid: " << endl;
			getline(cin, casesOfTheMenu);
			alcohol1.setDestiny(stoi(casesOfTheMenu));
			break;

		case 3:
			cout << "The strength of the alcohol: " << endl;
			getline(cin, casesOfTheMenu);
			alcohol1.setAlcohol1(stoi(casesOfTheMenu));
			break;
		}
		break;
	}
}