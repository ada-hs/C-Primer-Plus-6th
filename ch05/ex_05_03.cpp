#include <iostream>
#include <string>
#include <array>
#include <vector>

int main()
{
	double res = 0;
	double input;
	do 
	{	
		std::cin>>input;
		res+=input;
		std::cout << "The current result is: "<<res<<std::endl;
	} while (input!=0);

	system("pause");
	return 0;
}