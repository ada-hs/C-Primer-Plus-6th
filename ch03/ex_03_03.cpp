// 以度，分，秒的方式各输入一个维度，然后转为度的维度输出
// 1 度 = 60分
// 1 分 = 60秒
/*Write a program that asks the user to enter a latitude in degrees, minutes, and seconds
and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic
constants.You should use a separate variable for each input value..*/

#include <iostream>
using namespace std;

const int degree2minute = 60;
const int minute2second = 60;


int main() {
	float degree = 0.0;
	float second = 0.0;
	float minute = 0.0;
	float degree_out = 0.0;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;

	cout << "Finally, enter the seconds of arc: ";
	cin >> second;
	degree_out = degree + minute / minute2second + second / (minute2second*degree2minute);

	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds= " << degree_out << " degrees" << endl;
	system("pause");
	return 0;
}