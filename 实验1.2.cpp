#include<iostream>
using namespace std;
int main()
{
	double r, S, h, V;
	const double PI = 3.14;
	cin >> r >> h;
	S = PI * r * r;
	V = S * h / 3;
	cout << "Բ׶�����Ϊ" << V << endl;
	return 0;
}