#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

struct Car {
	string name;
	string colour;
	int year;
	string drive;
	void set_car()
	{
		cout << "Enter car's name: ";
		cin >> name;
		cout << "Enter car's colour: ";
		cin >> colour;
		cout << "Enter car's manufacture year: ";
		cin >> year;
		cout << "Enter car's drive: ";
		cin >> drive;
	}
	void show_car()
	{
		cout << "\n Name: " << name << endl;
		cout << " Colour: " << colour << endl;
		cout << " Year: " << year << endl;
		cout << " Drive: " << drive << endl << endl;
	}
};

int main() {
	Car car;
	car.set_car();
	car.show_car();
	system("pause");
	return 0;
}