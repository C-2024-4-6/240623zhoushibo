#include<iostream>
using namespace std;
int f(int n)
{
	int t;
	if (n == 10)
	{
		t = 1;
		return t;
	}
	else
		t = (f(n + 1) + 1) * 2;
	return t;

}
int main()
{
	int x = 1;
	cout << "第一天猴子共摘" << f(x) << "个桃子";
	return 0;
}