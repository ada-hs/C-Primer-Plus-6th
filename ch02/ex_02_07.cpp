#include <iostream>

void showTime( int hours,int minutes )
{
     std::cout << "Time: " << hours << ":" << minutes << std::endl;

    return;
}

int main() {
    
    int hours =0;
    int minutes = 0;
    std::cout << "Enter the number of hours: ";
    std::cin >> hours;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minutes;
 
    showTime(hours, minutes);
    
	return 0;
}