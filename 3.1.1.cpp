#include<iostream>
using namespace std;
int f(int x,int y)
{
	int i,z;
	for (i = 1;i <= x && i <= y;i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			z = i;
		}
	}
	return z;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout<<"最大公约数为"<<f(a, b);
	return 0;
}