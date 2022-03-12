/*
 * FileName: T2_19.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 12th, 2022
 * College:  Computer  science of Henan University
 * Function:Outputs two sums of three numbers, mean, product, minimum, and maximum
 */
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	double sum, averge, product, s=-999999999, l=99999999999;
	cin >> a >> b >> c;
	sum = a + b + c;
	averge = (a + b + c) / 3;
	product = a * b * c;
	if (a > s)
		s = a;
	if (b > s)
		s = b;
	if (c > s)
		s = c;
	if (a < l)
		l = a; 
	if (b < l)
	l = b; 
		
	cout << "Input three different integers : " << a <<" "<< b<<" " << c << endl;
	cout << "Sum is  " <<sum << endl;
	cout << "Averge is  " << averge << endl;
	cout << "Product is  " << product << endl;
	cout << "Smallest is  " << l << endl;
	cout << "Largest is  " << s << endl;
	return 0;
}
