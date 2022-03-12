/*
 * FileName: T2_20.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 12th, 2022
 * College:  Computer  science of Henan University
 * Function:The diameter, perimeter, and area of the output circle
 */
#include<iostream>
using namespace std;
int main()
{
	int r;
	cin >> r;
	double p = 3.14159,zj,zc,mj;
	zj = 2 * r;
	zc = 2 * p * r;
	mj = p * r * r;
	cout << "直径= " << zj << endl;
	cout << "周长= " << zc << endl;
	cout << "面积= " << mj << endl;

	return 0;
}
