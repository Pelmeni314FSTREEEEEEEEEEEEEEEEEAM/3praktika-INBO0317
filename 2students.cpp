#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

struct Student {
	string name;
	string last_name;
	int year;
	void show_student()
	{
		cout << " Name: " << name << endl;
		cout << " Last name: " << last_name << endl;
		cout << " Entrance year: " << year << endl << endl;
	}
};

int main() {
	Student students[100];
	int i = 0, c = 0;
	cout << "Enter the count of students: ";
	cin >> c;
	for (i = 0; i < c; i++) {
		cout << "Enter " << i + 1 << " student's name: ";
		cin >> students[i].name;
		cout << "Enter " << i + 1 << " student's last name: ";
		cin >> students[i].last_name;
		cout << "Enter " << i + 1 << " student's entrance year: ";
		cin >> students[i].year;
	}
	for (i = 0; i < c; i++)
	{
		cout << "\nStudent #" << i + 1 << ": \n";
		students[i].show_student();
	}
	system("pause");
	return 0;
}