#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double F, C;
	cin >> F;
	F = F - 32;
	C = F / 1.8;
	cout << fixed << setprecision(2) << C << endl;
	return 0;
}