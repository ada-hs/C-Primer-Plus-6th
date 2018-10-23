#include <iostream>
using namespace std;

int converToFahrenheit(int tmp_degree)
{
    return (1.8 * tmp_degree +32);
    
}

int main() {
    int degree;
    cout<<"Please enter a Celsiius value: "<<endl;
    cin>>degree;
    
    cout<<degree << " degrees Celsiius is "<< converToFahrenheit(degree)<< " degrees Fahrenheit.";
    
	return 0;
}