// 输入驱车里程（英里）和汽油使用量（加仑）。输出汽油耗油量为一加仑的里程
/*Write a program that asks how many miles you have driven and how many gallons
of gasoline you have used and then reports the miles per gallon your car has gotten.
Or, if you prefer, the program can request distance in kilometers and petrol in liters
and then report the result European style, in liters per 100 kilometers.*/

#include <iostream>
using namespace std;

int main() {
	double mile = 0.0;
	double gallon = 0.0;
	double mile_per_gallon = 0.0;

	cout << "Enter the distance in mile you drive: ";
	cin >> mile;
	cout << "Enter the consumption of oil: ";
	cin >> gallon;

	mile_per_gallon = mile / gallon;
	cout << "Average fuel consumption: " << mile_per_gallon << " mile/gallon" << endl;
	system("pause");
	return 0;
}