#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

struct Book {
		string name;
		string author;
		int year;
		string genre;
		void set_book()
		{
			cout << "Enter book's name: ";
			cin >> name;
			cout << "Enter book's author: ";
			cin >> author;
			cout << "Enter book's writing year: ";
			cin >> year;
			cout << "Enter book's genre: ";
			cin >> genre;
		}
		void show_book()
		{
			cout << "\n Name: " << name << endl;
			cout << " Author: " << author << endl;
			cout << " Year: " << year << endl;
			cout << " Genre: " << genre << endl << endl;
		}
};

int main() {
	Book book;
	book.set_book();
	book.show_book();
	system("pause");
	return 0;
}