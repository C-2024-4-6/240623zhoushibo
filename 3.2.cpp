#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int i,t;
	if (num == 1)
	{
		t = false;
	}
	if (num == 2)
	{
		t = true;
	}
	if (num >= 2)
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				t = false;
				break;
			}
			else
			{
				t = true;
			}
		}
	}
	return t;
}
int main()
{
	int x, n=0;
	for (x = 1; x <= 200;x++)
	{
		if (is_prime(x) == 1)
		{
			n++;
			cout << x << '\t';
			if (n % 10 == 0)
			{
				cout << endl;
			}
		}
	}
	return 0;
}