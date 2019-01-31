#include <iostream>
#include <string>
#include <cctype>
#include <array>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	char ch=0;
	while ((ch=cin.get())!='@')
	{
		if (isdigit(ch))
		{
			continue;
		}
		else if (islower(ch))
		{
			cout << (char)toupper(ch);
		}
		else if (isupper(ch))
		{
			cout << (char)tolower(ch);
		}
	
	}
	system("pause");
	return 0;
}