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
	std::array <double, 3> timeResults;
	double mean_time = 0.0;
	std::cout << "Enter three results time of running 40 meters:"<<std::endl;
	cin >> timeResults[0];
	cin >> timeResults[1];
	cin >> timeResults[2];

	mean_time = (timeResults[0] + timeResults[1] + timeResults[2]) / 3;
	
	cout << "Result: " << timeResults[0] << ", " << timeResults[1] << ", " << timeResults[2] << endl;
	cout << "Average result: " << mean_time<<std::endl;
	system("pause");
	return 0;
}