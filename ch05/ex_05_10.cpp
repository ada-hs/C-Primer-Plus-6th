#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

int main()
{
    int row = 0;
	cout << "Enter number of rows:";
	cin>>row;
	for (int i = 1;i<row;i++)
	{
		for (int j = i;j<row;j++)
		{
		cout<<".";
		}
		for (unsigned int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}