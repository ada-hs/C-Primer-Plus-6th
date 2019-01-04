#include <iostream>
#include <string>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
	
	char first_name[256];
	char last_name[256];

	cout << "Enter your first name:";
	cin.getline(first_name, 256);
	//  cin.get(first_name, 256);   // cin.get的参数和cin.getline相同，但是getline会读取换行符并保存到第一个参数中，但是cin.get会将换行符留在输入队列中，所以会导致下一个读取的内容是换行符

	cout << "Enter your last name:";
	cin.getline(last_name, 256);

	cout << "Here's your information is a single string: " << last_name << ", " << first_name << endl;

	system("pause");
	return 0;
}