/*
 * FileName: T2_18.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 12th, 2022
 * College:  Computer  science of Henan University
 * Function:Compare the sizes of the two numbers
 */
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
		cout << a << " is large" << endl;
	if(a < b)
		cout<< b << " is large" << endl;
	if (a == b)
		cout << "These numbers are equal" << endl;
	return 0;
}
