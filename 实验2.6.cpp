#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b;
	for (c = a <= b ? a : b;; c--)
		if (a % c == 0 && b % c == 0)break;
	cout << "�������Ϊ" << c << endl;
	for (d = a >= b ? a : b;; d++)
		if (d % a == 0 && d % b == 0)break;
	cout << "��С������Ϊ" << d << endl;
	return 0;
}