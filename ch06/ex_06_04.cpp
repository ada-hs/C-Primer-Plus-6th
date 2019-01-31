#include <iostream>
#include <string>
#include <cctype>
#include <array>
#include <iomanip>
#include <fstream>

using namespace std;
const unsigned int strsize = 50;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;

};

void display_by_name(const struct bop *bopArray, unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << bopArray[i].fullname << endl;
	}
}
void display_by_title(const struct bop *bopArray, unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << bopArray[i].title << endl;
	}
}
void display_by_bopname(const struct bop *bopArray, unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << bopArray[i].bopname << endl;
	}
}

void display_by_preference(const struct bop *bopArray, unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (bopArray[i].preference == 0)
		{
			cout << bopArray[i].fullname << endl;
		}
		else if (bopArray[i].preference == 1)
		{
			cout << bopArray[i].title << endl;
		}
		else if (bopArray[i].preference == 2)
		{
			cout << bopArray[i].bopname << endl;
		}
	}
}
int main()
{
	const struct bop bopArray[5] = {
		{ "Wimp Macho", "Teacher", "W.M", 0 },
		{ "Raki Rhodes", "Programmer", "P.R", 1 },
		{ "Celia Laiter", "Doctor", "C.L", 2 },
		{ "Hoppy Hipman", "Artist", "H.P", 0 },
		{ "Pat Hand", "Painter", "P.H", 1 }
	};
	char choice = 0;

	cout << "Benevolent Order of Proframers Report" << endl;
	cout << left << setw(30) << "a. display by name" << "b. display by title" << endl;
	cout << left << setw(30) << "c. display by bopname" << "d. display by preference" << endl;
	cout << left << setw(30) << "q. quit" << endl;
	cout << "Enter your choice:";

	while (cin >> choice)
	{
		if (choice == 'q')
		{
			break;
		}
		switch (choice)
		{
		case 'a':
			display_by_name(bopArray, 5);
			break;

		case 'b':
			display_by_title(bopArray, 5);
			break;

		case 'c':
			display_by_bopname(bopArray, 5);
			break;

		case 'd':
			display_by_preference(bopArray, 5);
			break;

		default:
			break;
		}
		cout << "Next choice:";
	}
	cout << "Bye!" << endl;
	system("pause");
	return 0;
}