#include <iostream>
#include <string>
#include <cctype>
#include <array>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	string FileName;
	ifstream inFile;
	unsigned int num = 0;
	char ch = 0;

	cout << "Enter the file name:";
	getline(cin, FileName);

	inFile.open(FileName.c_str());

	while ((ch = inFile.get()) != EOF)
	{
		num++;
	}

	cout << "There are " << num << " characters in " << FileName << " file." << endl;

	system("pause");
	return 0;
}