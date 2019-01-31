#include <iostream>
#include <string>
#include <cctype>
#include <array>
#include <iomanip>
#include <fstream>

using namespace std;


int main()
{
	const int size_max = 10;
	double donation[size_max];
	double avg = 0.0;
	double sum = 0.0;
	int cnt = 0;
	
	int larger_cnt = 0;
	cout << "Please enter up to ten double value, Non-digital to exit: " << endl;
	while (cnt<size_max && (cin>>donation[cnt]))
	{
		sum += donation[cnt];
		cnt++;
	}

	avg = sum/cnt;
	for (int i = 0; i < size_max; i++)
	{
		if (donation[i]>avg)
		{
			larger_cnt++;
		}
	}
	cout << "The average value is " << avg << ", and there are " << larger_cnt << " double value large than average value!" << endl;
	system("pause");
	return 0;
}