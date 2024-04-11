// TinhDienTichChuVi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double chuvi(double a, double b) {
	return (a+b)*2;
}
double dientich(double a, double b) {
	return a*b;
}
int main()
{
	double a, b;
	cout << "Nhap Chieu Dai:"<<endl;
		cin >> a;
	cout << "Nhap Chieu Rong:"<<endl;
		cin >> b;
			cout << "Chu vi cua hinh chu nhat la:" << chuvi(a,b) << "cm" << endl;
			cout << "Dien tich cua hinh chu nhat la:" << dientich(a,b) << "cm" << endl;
			
			
return 0;
}
