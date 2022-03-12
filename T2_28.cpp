/*
 * FileName: T2_28.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 12th, 2022
 * College:  Computer  science of Henan University
 * Function:Take the number of integers
 */
#include<iostream>
using namespace std;
int main()
{

	int n,a,b,c,d,e;
	cin >> n;
	e =n % 10;
	d = n / 10 % 10;
	c = n / 100 % 10;
	b = n / 1000 % 10;
	a = n / 10000;
	cout << a << "  " << b << "  " << c << "  " << d << "  " << e;

	return 0;
}
