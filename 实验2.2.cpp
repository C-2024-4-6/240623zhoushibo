#include <iostream>
using namespace std;
int main()
{
	double x;
	cin >> x;
	if (x <= 0 || x >= 10)
		cout << "超出函数定义域" << endl;
	if (x > 0 && x < 1)
		cout << 3 - 2 * x << endl;
	if (x >= 1 && x < 5)
		cout << 2 / (4 * x) + 1 << endl;
	if (x >= 5 && x < 10)
		cout << x * x << endl;
	return 0;
}