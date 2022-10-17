#include <iostream>
#include <string>
using namespace std;

int func(double n)
{
	if (n == 1) return 5;
	else return 5 * n + func(n - 1);
}

int main()
{
	cout << "Please enter a number \n";
	int n;
	cin >> n;
	cout << "The sum is: " << func(n);
	return 0;
}