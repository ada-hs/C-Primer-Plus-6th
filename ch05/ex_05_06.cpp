#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;
int main()
{
	std::string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	
	int sale_out[3][12] = {0};
	int total_sales[3] = {0};
	for (int i = 0; i < 3; i++)
	{
		std::cout << "Enter " << i + 1 << " year(s) sales of book <C++ for Fools> each month: " << std::endl;
		for (int  j = 0;j<12;j++)
		{
			std::cout << month[i] << ": ";
			std::cin >> sale_out[i][j];
			total_sales[i] += sale_out[i][j];
		}

	}
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << " year(s) total sales is " << total_sales[i] << endl;
	}

	cout << "Three years total sales is " << total_sales[0] + total_sales[1] + total_sales[2] << endl;
	system("pause");
	return 0;
}