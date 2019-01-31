#include <iostream>
#include <string>
#include <cctype>
#include <array>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	const double tax_rate1 = 0.1;
	const double tax_rate2 = 0.15;
	const double tax_rate3 = 0.2;
	double income = 0.0;
	double tax = 0.0;

	cout << "Please enter your income:";
	while ((cin >> income) && (income > 0))
	{
		if (income<=5000)
		{
			tax=0;
		}
		else if (income>5000&&income<=15000)
		{
			tax = (income-5000)*tax_rate1;
		}
		else if (income > 15000 && income <= 35000)
		{
			tax = (15000 - 5000)*tax_rate1+(income-15000)*tax_rate2;
		}

		else
		{
			tax = (15000 - 5000) * tax_rate1 + (35000 - 15000) * tax_rate2 + (income - 35000) * tax_rate3;
		}

		cout << "Your real income = " << income << ", but you need offer tax = " << tax << endl;
	
	}


	system("pause");
	return 0;
}