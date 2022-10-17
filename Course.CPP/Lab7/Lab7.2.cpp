#include <iostream>
#include <windows.h>
#include <cmath> 

using namespace std;
struct SQE //Solving a quadratic equation 
{
	double root1;
	double root2;
	string noroot;
};

SQE sqe(double a, double b, double c)
{
	SQE roots;
	double d = b * b - 4 * a * c;

	if (d < 0) {
		roots.noroot = "x1 & x2 not exists";
	} else if (d == 0) {
		roots.root1 = -b / (2 * a);
		roots.root2 = -b / (2 * a);
	}
	else {
		roots.root1 = (-b + pow(d, 0.5)) / (2 * a);
		roots.root2 = (-b - pow(d, 0.5)) / (2 * a);
	}
	return roots;
}

int main()
{
	double a, b, c;
	cout << "Please enter coefficient 'a'\n";
	cin >> a;
	cout << "Please enter coefficient 'b'\n";
	cin >> b;
	cout << "Please enter coefficient 'c'\n";
	cin >> c;

	SQE test = sqe(a, b, c);
	cout << test.noroot << "\n" << "x1 = " << test.root1 << " x2 = " << test.root2 << endl;
}