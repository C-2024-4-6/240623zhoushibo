#include<iostream>
using namespace std;
int f1(int x,int y)
{
	int i,z;
	for (i = 1;i <= x && i <= y;i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			z = i;
		}
	}
	cout << "���Լ��Ϊ" << z << endl;
	return 0;
}
int f2(int x, int y)
{
	int i, z;
	for (i = 1;;i++)
	{
		if (i % x == 0 && i % y == 0)
		{
			z = i;
			break;
		}
	}
	cout << "��С������Ϊ" << z << endl;
	return 0;
}
int main()
{
	int a, b;
	cin >> a >> b;
	f1(a, b);
	f2(a, b);
	return 0;
}