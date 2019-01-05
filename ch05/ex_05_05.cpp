#include <iostream>
#include <string>
#include <array>
#include <vector>


int main()
{
	std::string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	
	int sale_out[12];
	int total_sales = 0;
	for (int i = 0; i < 12; i++)
	{
		std::cout << month[i] << ": ";
		std::cin >> sale_out[i];
		total_sales += sale_out[i];
	
	}
	std::cout << "The total sales is " << total_sales << std::endl;
	for (int i = 0; i < 12; i++)
	{
		std::cout << month[i] << ": " << sale_out[i] << std::endl;
	}

	system("pause");
	return 0;
}