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
	
	CandyBar *snack = new CandyBar[3]{ { "Mocha Munch", 2.3, 350 },
	{ "Apple", 2.3, 300 } ,
	{ "Orange", 1.3, 150 } };

	for (int i = 0; i< 3;i++)
	{
		cout << "the information of CandyBar, Name: " << snack[i].name << ", Weight: " << snack[i].weight << ", " << " Calories: " << snack[i].calories << "." << endl;

	}
	delete[]snack;
	system("pause");
	return 0;
}