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
	struct Pizza {
		string name;
		double weight;
		float diameter;
	};

	Pizza *pizz_info = new Pizza; // 该方式使得变量放在堆中

	cout << "Enter the pizza size: ";
	cin >> pizz_info->diameter;
	cout << "Enter the pizza company name: ";
	getline(cin, pizz_info->name);

	cout << "Enter the pizza weight: ";
	cin >> pizz_info->weight;

	cout << "The company name of pizza is " << pizz_info->name << ", the size of the pizza is " << pizz_info->diameter << ", the weight of the pizza is " << pizz_info->weight << endl;

	system("pause");
	return 0;
}