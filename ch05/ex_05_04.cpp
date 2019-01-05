#include <iostream>
#include <string>
#include <array>
#include <vector>

int main()
{
	int Daphne_principal = 100;
	double single_rate = 0.1;
	int Cleo_principal = 100;
	double compound_interest = 0.05;

	int years = 0;
	double Daphne_interest = 100;
	double Cleo_interest = 100;
	double current_principal = 0;
	while (Daphne_interest >= Cleo_interest)
	{
		years++;
		Daphne_interest = Daphne_principal + single_rate*Daphne_principal*years;
		double current_intrest = Cleo_interest * compound_interest;
		Cleo_interest += current_intrest;
		
	}

	std::cout<<"After "<<years<<" years, Cleo's interest will surpass Daphne's interest"<< std::endl;
	std::cout << "Daphne interest is: " << Daphne_interest<<std::endl;
	std::cout << "Cleo interest is: " << Cleo_interest << std::endl;



	system("pause");
	return 0;
}