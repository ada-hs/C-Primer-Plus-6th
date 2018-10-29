// 以整数方式输入秒数（使用long或者long long）.以天，小时，分钟的形式输出
// 1 度 = 60分
// 1 分 = 60秒
/*Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then displays the equivalent
time in days, hours, minutes, and seconds. Use symbolic constants to represent
the number of hours in the day, the number of minutes in an hour, and the number
of seconds in a minute.*/

#include <iostream>
using namespace std;


const int minute2second = 60;
const int day2hours = 24;

int main() {
	long seconds = 0.0;
	int days = 0.0;
	int minutes = 0.0;
	int hours = 0.0;
	int second_rest;

	cout << "Enter the number of seconds:" << endl;
	cin >> seconds;

	days = seconds / (24 * 60 * 60);
	hours = ((seconds % (24 * 60 * 60)) / (60 * 60));
	minutes = ((seconds % (60 * 60)) / 60);
	second_rest = (seconds % 60);

	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << second_rest << " minutes, " << endl;
	system("pause");
	return 0;
}