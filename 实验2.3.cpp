#include <iostream>
using namespace std;
int main()
{
	int a, b, c, l;
	cin >> a >> b >> c;
	l = a + b + c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�����ε��ܳ�Ϊ" << l << endl;
		if (a == b || b == c || a == c)
			cout << "�ǵ���������" << endl;
		else
			cout << "���ǵ���������" << endl;
	}
	else cout << "���ܹ���������" << endl;
	return 0;
}