/*
 * FileName: T2_23.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 12th, 2022
 * College:  Computer  science of Henan University
 * Function:The largest and smallest integers
 */
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f,max=-999999999,min=999999999;
	cin >> a >> b >> c >> d >> e ;
	if (a > max)
		max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	if (e > max)
		max = e;
	
	if (a < min)
		min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	if (d< min)
		min = d;
	if (e< min)
		min =e;
	

	cout << "max= " << max << endl;
	cout << "min= " << min << endl;

	return 0;
}
