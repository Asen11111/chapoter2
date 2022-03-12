/* 
 * FileName: T2_16.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 12th, 2022
 * College:  Computer  science of Henan University
 * Function:Outputs the sum, product, difference, and quotient of two numbers
 */
#include<iostream>
using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	cout << "ºÍ=" << (a + b)<< endl;
	cout << "³Ë»ý=" << (a * b) << endl;
	cout << "²î=" << (a - b) << endl;
	cout << "ÉÌ=" << (a / b) << endl;

	return 0;
}