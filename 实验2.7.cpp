#include<iostream>
using namespace std;
int main()
{
	char c = '*';
	for (int i = 1; i <= 5; i++)
	{
		for (int a = 1; a <= i; a++)
		{
			cout << c;
		}
		for (int b = 1; b <= 5 - i; b++)
		{
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}