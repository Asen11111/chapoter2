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
	cout << "��������ʻӢ������\n";
	cin >> a;
	cout << "���������ͼ۸�\n";
	cin >> b;
	cout << "���������Ϳ��Կ���ƽ��Ӣ����\n";
		cin >> c;
		cout << "���������ͣ����\n";
		cin >> d;
		cout << "���������ͨ�з�\n";
		cin >> e;
		sum = (a / c) * b + d + e;
		cout << "���տ����ܷ���Ϊ��" <<sum<< endl;

	return 0;
}
