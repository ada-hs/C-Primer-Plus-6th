#include <iostream>
#include <string>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
	char first_name[128];
	char last_name[128];
	char letter;
	int age;

	cout << "What is your first name? ";
	cin.getline(first_name, 128);

	cout << "What is your last name? ";
	cin.getline(last_name, 128);

	cout << "What letter grade do you deserve? ";
	cin >> letter;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(letter + 1) << endl;
	cout << "Age: " << age << endl;
	//system("pause");
	return 0;
}