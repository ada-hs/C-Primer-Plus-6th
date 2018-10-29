// 用几英寸几英尺的方式输入身高，并以磅为单位输入体重。计算BMI.以符号常量表示转换因子
// 1 英尺 = 12 英寸
// 1 英寸 = 0.0254米
// 1 千克 = 2.2磅
// BMI = 体重（千克）/ 身高（m^2）
/*Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.*/

#include <iostream>
using namespace std;

const int Inch2meter = 0.0254;
const int kilotoPound = 2.2;
const int Foot2Inch = 12;

int main() {
	double height_foot = 0.0;
	double height_inch = 0.0;
	double height_meter = 0.0;
	double weight_pound = 0.0;
	double weight_kilo = 0.0;
	double BMI = 0.0;

	cout << "Enter your height in foot and inch" << endl;
	cout << "First enter the foot: ";
	cin >> height_foot;
	cout << "Second enter the inch: ";
	cin >> height_inch;

	cout << "Enter you weight in pound: ";
	cin >> weight_pound;

	height_meter = (height_foot * Foot2Inch + height_inch) * Inch2meter;
	weight_kilo = weight_pound / kilotoPound;

	BMI = weight_kilo / (height_meter * height_meter);

	cout << "Your BIM is " << BMI << endl;
	system("pause");
	return 0;
}