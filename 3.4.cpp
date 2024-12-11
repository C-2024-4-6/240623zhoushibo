#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c) == 0)
	{
		cout << "´íÎó";
	}
	else {
		cout << area(a, b, c);
	}
	return 0;
}