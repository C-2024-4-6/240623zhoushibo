#include<iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	int i;
	if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2 && side1 > 0 && side2 > 0 && side3 > 0)
	{
		i = true;
	}
	else
	{
		i = false;
	}
	return i;
}
double area(double side1, double side2, double side3)
{
	double s,a;
	s = (side1 + side2 + side3) / 2;
	a = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return a;
}