#include<iostream>
using namespace std;
int main()
{
	double x = 2, s, d = 1, p;
	s = x;
	do
	{
		x = 2 * x;
		s = s + x;
		d++;
	} while (x <= 100);
	s = s - x;
	d = d - 1;
	p = 0.8 * s / d;
	cout << "每天平均花" << p << "元" << endl;
	return 0;
}