#include <iostream>
using namespace std;
void main()
{
	int a, b, c;
	cout << "Please enter 3 numbers \n";
	cin >> a;
	cin >> b;
	cin >> c;

	if (a >= b && a > c || a > b && a >= c)
	{
		cout << a << " is max";
	}
	else if (b >= a && b > c || b > a && b >= c)
	{
		cout << b << " is max";
	}
	else if (c >= a && c > b || c > a && c >= b)
	{
		cout << c << " is max";
	}
	else
	{
		cout << "There is no maximum";
	}

}
