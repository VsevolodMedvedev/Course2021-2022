#include <iostream>
#include <string>
using namespace std;

double triangleArea(double a)
{
	double p = 1.5 * a ;
	double square = pow((p * (p - a) * (p - a) * (p - a)), 0.5);
	return square;
}

double triangleArea(double a, double b, double c)
{
	double p = 0.5 * (a + b + c);
	double square = pow((p * (p - a) * (p - b) * (p - c)), 0.5);
	return square;
}

int main()
{
	char chois;
	cout << "Please press 1 to calculate the equilateral triangle area, press 2 to calculate the versatile triangle area \n";
	cin >> chois;
	switch (chois)
	{
	case '1':
		double x;
		cout << "Please enter the side length\n";
		cin >> x;
		cout << "The area of an equilateral triangle: " << triangleArea(x);
		break;

	case '2':
		double a, b, c;
		cout << "Please enter sides length\n";
		cin >> a;
		cin >> b;
		cin >> c;
		cout << "The area of an versatile triangle: " << triangleArea(a, b, c);
		break;

		return 0;
	}
}

