// 以欧洲风格输入汽车耗油量（每100公里耗油量（升））。转换为每个风格耗油量（每加仑多少英里）
/*Write a program that asks you to enter an automobile gasoline consumption figure
in the European style (liters per 100 kilometers) and converts to the U.S. style of
miles per gallon. Note that in addition to using different units of measurement, the
U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance).
Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19
mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.*/

#include <iostream>
using namespace std;

int main() {
	double fuel_comsuption_eu = 0.0;
	double fuel_comsuption_us = 0.0;

	cout << "Enter the fuel consumption in Europe standard: ";
	cin >> fuel_comsuption_eu;

	fuel_comsuption_us = fuel_comsuption_eu / 19 * 12.41;
	cout << "the fuel consumption in US standard is " << fuel_comsuption_us << "/100KM" << endl;
	system("pause");
	return 0;
}