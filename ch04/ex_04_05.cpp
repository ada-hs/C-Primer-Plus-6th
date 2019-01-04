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
	struct CandyBar {
		string name;
		double weight;
		int calories;
	} ;
	
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << "the information of CandyBar, Name: " << snack.name << ", Weight: " << snack.weight << ", " << " Calories: " << snack.calories << "." << endl;

	system("pause");
	return 0;
}