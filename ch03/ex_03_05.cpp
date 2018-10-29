// 输入全球当前人口和美国当前人口，输出人口所占比
/*Write a program that requests the user to enter the current world population and
the current population of the U.S. (or of some other nation of your choice). Store
the information in variables of type long long. Have the program display the percent
that the U.S. (or other nation’s) population is of the world’s population.*/

#include <iostream>
using namespace std;

int main() {
	long long world_population = 0;
	long long US_population = 0;
	double rate = 0.0;

	cout << "Enter the world's population :";
	cin >> world_population;

	cout << "Enter the population of the US: ";
	cin >> US_population;

	rate = double(US_population) / (world_population);
	cout << "The population of the US is " << rate * 100 << "% of the world population." << endl;
	system("pause");
	return 0;
}