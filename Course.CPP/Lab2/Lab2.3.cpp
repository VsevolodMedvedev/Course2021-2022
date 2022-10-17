#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, x;
	a = 0;
	b = 0;
	c = 0; 
	d = 0;

	cout << "Please enter the number\n";
	cin >> x;

	a = x / 25;
	b = x % 25 / 10;
	c = (x % 25 % 10) / 5;
	d = x % 25 % 10 % 5;

	cout << "coin" "\t" "number" "\n" << "25\t" << a << "\n10\t" << b << "\n5\t" << c <<"\n1\t" << d << "\nTotal:\t" << a+b+c+d;
}