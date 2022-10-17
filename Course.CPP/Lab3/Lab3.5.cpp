#include <iostream>
#include <string>
using namespace std;

void func(int n)
{
	if (n > 0)
	{
	func(n/2);
	cout << n%2;
	}
	
}

int main()
{
	cout << "Please enter a number ";
	int n;
	cin >> n;
	cout << "Decimal\tBinary\n" << n << "\t";
	func(n);
	return 0;
}

