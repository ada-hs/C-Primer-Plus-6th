#include <iostream>

double LightYears2Astronomical(double LightYears)
{
    return (LightYears * 63240);
}

int main() {
    double lightYears =0;
    std::cout << "Enter the number of light years: ";
    std::cin >> lightYears;
 
    std::cout << lightYears << " light years = " << LightYears2Astronomical(lightYears) << " astronomical units." << std::endl;
    
	return 0;
}