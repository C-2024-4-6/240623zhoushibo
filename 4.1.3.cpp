#include<iostream>
using namespace std;
int main()
{
	bool a[100];
	for (int m= 0; m < 100; m++)
	{
		a[m] = false;
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = i; j < 100; j += i + 1)
		{
			if (a[j])
				a[j] = false;
			else
				a[j] = true;
		}
	}
	for (int k = 0; k < 100; k++)
	{
		if (a[k])
		{
			cout <<k+1<< " ";
		}
	}
	return 0;
}
