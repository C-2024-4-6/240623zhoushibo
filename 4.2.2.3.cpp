#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int* a = new int[num];
	for (int i = 0; i < num; i++)
		cin >> a[i];
	cout << "a:" << a << endl;
	cout << "a+1:" << a + 1 << endl;
	cout << "a[0]:" << a[0] << endl;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < num-1; j++)
			if (a[j] > a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
				changed = true;
			}
	} while (changed);
	cout << "ÅÅĞòºó£º";
	for (int i = 0; i < num; i++)
		cout << a[i] << " ";
	delete[] a;
	return 0;
}