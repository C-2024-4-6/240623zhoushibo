#include<iostream>
#include <math.h>
using namespace std;
int parseHex(const char* const hexString)
{
	int size=0;
	while (hexString[size] !='\0')
	{
		size++;
	}
	int num = 0, a = 0;
	for (int i = size - 1; i >= 0; i--)
	{
		if (hexString[i] >= 65)
		{
			num = num + (hexString[i]-55)* pow(16, a);
		}
		else
			num = num + (hexString[i]-48) * pow(16, a);
		a++;
	}
	return num;
}
int main()
{
	char* a = new char[100];
	cin >> a;
	const char* const b = a;
	cout << parseHex(b);
	delete [] a;
	return 0;
}