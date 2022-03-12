/*
 * FileName: T2_31.cpp
 * Author:   sen Li
 * E-mail:  1592123410@qq.com
 * Date:     Mar 12th, 2022
 * College:  Computer  science of Henan University
 * Function:Shows the daily driving cost
 */
#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d, e,sum;
	cout << "请输入行驶英里总数\n";
	cin >> a;
	cout << "请输入汽油价格\n";
	cin >> b;
	cout << "请输入汽油可以开的平均英里数\n";
		cin >> c;
		cout << "请输入今日停车费\n";
		cin >> d;
		cout << "请输入今日通行费\n";
		cin >> e;
		sum = (a / c) * b + d + e;
		cout << "今日开车总费用为：" <<sum<< endl;

	return 0;
}
