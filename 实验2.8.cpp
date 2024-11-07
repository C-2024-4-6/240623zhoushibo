#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double  a, x, x1, y;
	cin >> a;
	x = a;
	if (a < 0)
	{
		cout << "´íÎó" << endl;
	}
	if (a == 0)
	{
		cout << 0 << endl;
	}
	if (a > 0)
	{
		do
		{
			x1 = (x + a / x) / 2;
			y = x;
			x = x1;
			x1 = y;
		} while (fabs(x1 - x) >= 1e-4);
		cout << x << endl;
	}
	return 0;
}