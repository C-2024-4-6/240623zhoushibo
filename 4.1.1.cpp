#include<iostream>
using namespace std;
int main()
{
	int a[10], b[10], num = 1;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	b[0] = a[0];
	for (int i = 0; i < 10;i++)
	{
		for (int j =i-1; j>=0; j--)
		{
			if (a[i] == a[j])break;
			if (j==0)
			{
				b[num] = a[i];
				num++;
			}
		}
	}
	for (int i = 0; i < num ; i++)
	{
		cout << b[i]<<" ";
	}
	return 0;
}