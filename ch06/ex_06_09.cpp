#include <iostream>
#include <string>
#include <cctype>
#include <array>
#include <iomanip>
#include <fstream>

using namespace std;
struct pat_info
{
	string name;
	double amount;
};
int main()
{
	unsigned int contributors = 0;
	unsigned int tmp = 0;
	string FileName;
	ifstream inFile;


	cout << "Enter the file name:";
	getline(cin, FileName);
	inFile.open(FileName.c_str());
	inFile >> contributors;
	inFile.get();

	struct pat_info *pContributors = new struct pat_info[contributors];

	for (size_t i = 0; i < contributors; i++)
	{
		//      cout << "Enter the name of " << i + 1 << " contributor: ";
		getline(inFile, pContributors[i].name);

		//      cout << "Enter the amount of donation: ";
		inFile >> pContributors[i].amount;
		inFile.get();
	}

	cout << "Grand Pators:" << endl;
	for (size_t i = 0; i < contributors; i++)
	{
		if (pContributors[i].amount > 10000)
		{
			cout << "Contributor name: " << pContributors[i].name << endl;
			cout << "Contributor amount: " << pContributors[i].amount << endl;
			tmp++;
		}
	}
	if (tmp == 0)
	{
		cout << "none" << endl;
	}

	tmp = 0;
	cout << "Pators:" << endl;
	for (size_t i = 0; i < contributors; i++)
	{
		if (pContributors[i].amount < 10000)
		{
			cout << "Contributor name: " << pContributors[i].name << endl;
			cout << "Contributor amount: " << pContributors[i].amount << endl;
			tmp++;
		}
	}
	if (tmp == 0)
	{
		cout << "none" << endl;
	}


	system("pause");
	return 0;
}