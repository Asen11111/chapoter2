/*
 * FileName: T2_30.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 12th, 2022
 * College:  Computer  science of Henan University
 * Function:Body Mass Index Calculator
 */
#include<iostream>
using namespace std;
int main()
{
	double sg, tz;
	cout << "请输入您的身高（米）和体重（千克）" << endl;
	cin >> sg >> tz;
	cout << "BMI VALUES\n";
	cout << "Underweight: less than 18.5\n";
	cout << "Normal:      between 18.5 and 24.9\n ";
	cout << "Overweight: between 25 and 29.9\n ";
	cout << "Obese:      30  or  greater\n";
	cout << "您的BMI指数为：" << (tz / (sg * sg)) << endl;

	return 0;
}
