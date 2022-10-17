#include <iostream>
#include <string>
using namespace std;

double func1(double x)
{
	return pow(x, 1.0/3);
}

double func2(double x)
{
	double y, y1;
	y = x;

	do
	{
		y1 = y;
		y = 1.0 / 3 * (x/(y*y) + 2 * y);
	}
	while ((y1-y) > 0.0001);
	return y;
}

int main()
{
	double x;
	cout << "Please enter the number \n";
	cin >> x;
	cout << "Result 1:\t" << func1(x) <<"\n";
	cout << "Result 2:\t" << func2(x);
	return 0;
}

