#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

struct Vector {
	char name;
	int x;
	int y;
	int z;
	void set_vector()
	{
		cout << "Enter vector's name: ";
		cin >> name;
		cout << "Enter vector's X coordinate: ";
		cin >> x;
		cout << "Enter vector's Y coordinate: ";
		cin >> y;
		cout << "Enter vector's Z coordinate: ";
		cin >> z;
	}
	void show_vector()
	{
		cout << " Name: " << name << endl;
		cout << " X: " << x << endl;
		cout << " Y: " << y << endl;
		cout << " Z: " << z << endl << endl;
	}
};

int main() {
	Vector vector;
	vector.set_vector();
	vector.show_vector();
	system("pause");
	return 0;
}