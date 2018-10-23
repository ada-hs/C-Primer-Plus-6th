#include <iostream>
using namespace std;

int main() {
    
    int furlongs;
    cout<<"Please input your furlongs..."<<endl;
    cin>>furlongs;
    float yards;
    yards = furlongs/220;
    
    cout<<"The yards value is  " << yards<< " after converted..."<<endl;
	return 0;
}