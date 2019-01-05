#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;
struct car
{
	string campany;
	int years;

};
int main()
{
    int num  = 0;
	
	cout << "How many cars do you wish to catalog?";
	cin>>num;
	struct car *pt = new struct car[num];
	for (int i = 0;i<num;i++)
	{
		cout << "Car #" << i+1 << ": "<<endl;
		string make = "";
		int year_make = 0;
		cout << "Please enter the make:";
		cin >> make;
		pt[i].campany = make;

		cout << "Please enter the year make:";
		cin >> year_make;
		pt[i].years = year_make;
	}

	cout << "Here is your collection:"<<endl;
	for (int i = 0; i < num; i++)
	{
		cout << pt[i].years << " " << pt[i].campany << endl;
	}

	system("pause");

	return 0;
}