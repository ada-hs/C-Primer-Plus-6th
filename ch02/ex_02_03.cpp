#include <iostream>
using namespace std;

void printString1()
{
    std::cout << "Three blind mice" << std::endl;
    return;
}

void printString2()
{
    std::cout << "See how they run" << std::endl;
    return;
}

void call()
{
    printString1();
    printString1();
    printString2();
    printString2();
    
    return ;
}
int main() {
    
    call();
	return 0;
}