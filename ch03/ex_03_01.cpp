// 输入身高。将升高转为英尺和英寸。用const符号常量表示转换因子.用下划线表示输入位置
/*Write a short program that asks for your height in integer inches and then converts
your height to feet and inches. Have the program use the underscore character to
indicate where to type the response. Also use a const symbolic constant to represent
the conversion factor.*/

#include <iostream>
using namespace std;

const int Foot2Inch = 12;
int main() {
	int inch_input = 0;
	int inch_output = 0;
	int foot = 0;

	cout << "Please input you height in inch:___\b\b\b";
	cin >> inch_input;
	foot = inch_input / Foot2Inch;
	inch_output = inch_input % Foot2Inch;

	cout << "Your height in inch was: " << inch_input << "; Your height in foot and inch was: " << foot << " foot " << inch_output << " inch!" << endl;
	//system("pause");
	return 0;
}