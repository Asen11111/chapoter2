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
	cout << "������������ߣ��ף������أ�ǧ�ˣ�" << endl;
	cin >> sg >> tz;
	cout << "BMI VALUES\n";
	cout << "Underweight: less than 18.5\n";
	cout << "Normal:      between 18.5 and 24.9\n ";
	cout << "Overweight: between 25 and 29.9\n ";
	cout << "Obese:      30  or  greater\n";
	cout << "����BMIָ��Ϊ��" << (tz / (sg * sg)) << endl;

	return 0;
}
