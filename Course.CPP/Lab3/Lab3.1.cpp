#include <iostream>
#include <string>
using namespace std;

double length(double x1, double y1, double x2, double y2)
{
	double length = pow(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)), 0.5);
	return length;
}

double square(double a, double b, double c)
{
	double p = 0.5 * (a + b + c);
	double square = pow((p*(p-a)*(p-b)*(p-c)), 0.5);
	return square;
}

int main()
{	
	double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Ex, Ey, sum;
	cout << "Please enter the coordinates of the point \n";
	cout << "Ax: ";  cin >> Ax;
	cout << "Ay: ";  cin >> Ay;
	cout << "Bx: ";  cin >> Bx;
	cout << "By: ";  cin >> By;
	cout << "Cx: ";  cin >> Cx;
	cout << "Cy: ";  cin >> Cy;
	cout << "Dx: ";  cin >> Dx;
	cout << "Dy: ";  cin >> Dy;
	cout << "Ex: ";  cin >> Ex;
	cout << "Ey: ";  cin >> Ey;

	sum = square(length(Ax, Ay, Bx, By), length(Bx, By, Ex, Ey), length(Ex, Ey, Ax, Ay)) +
		square(length(Bx, By, Cx, Cy), length(Cx, Cy, Dx, Dy), length(Dx, Dy, Bx, By)) +
		square(length(Bx, By, Dx, Dy), length(Dx, Dy, Ex, Ey), length(Ex, Ey, Bx, By));
	cout << "The area of the pentagon is: " << sum << "\n";

	return 0;
}

