#include <iostream>
#include <string>
#include <cctype>
#include <array>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	int vowels = 0;
	int cinsonants = 0;
	int others = 0;
	string input;
	cout << "Enter words (q to quit): " << endl;

	while ((cin >> input))
	{
		if (input.length() == 1 && input[0] == 'q')
		{
			break;
		}
		if (isalpha(input[0]))
		{
			if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u')
			{
				vowels++;
			}
			else
				cinsonants++;
		}
		else
			others++;
	
	}

	cout << vowels << " words beginning with vowels" << endl;
	cout << cinsonants << " words beginning with consonants" << endl;
	cout << others << " others" << endl;

	system("pause");
	return 0;
}