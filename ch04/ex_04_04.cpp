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
	
	string firstName;
	string lastName;

	cout << "Enter your firs name:";
	getline(cin, firstName);

	cout << "Enter your last name:";
	getline(cin, lastName);

	cout << "Here;s the information in a singlt string: " << lastName << ", " << firstName << "\n";

	system("pause");
	return 0;
}