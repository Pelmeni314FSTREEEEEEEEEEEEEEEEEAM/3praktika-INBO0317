#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

struct library {
	string name;
	string author;
	int year;
	string genre;
	void show_book()
	{
		cout << " Name: " << name << endl;
		cout << " Author: " << author << endl;
		cout << " Year: " << year << endl;
		cout << " Genre: " << genre << endl << endl;
	}
};

int main() {
	library books[100];
	int i = 0, c = 0;
	cout << "Enter the count of books: ";
	cin >> c;
	for (i = 0; i < c; i++) {
		cout << "Enter " << i + 1 << " book's name: ";
		cin >> books[i].name;
		cout << "Enter " << i + 1 << " book's author: ";
		cin >> books[i].author;
		cout << "Enter " << i + 1 << " book's writing year: ";
		cin >> books[i].year;
		cout << "Enter " << i + 1 << " book's genre: ";
		cin >> books[i].genre;
	}
	for (i = 0; i < c; i++)
	{
		cout << "\nBook #" << i + 1 << ": \n";
		books[i].show_book();
	}
	system("pause");
	return 0;
}