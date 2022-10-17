#include <iostream>
#include "Windows.h"
#include "Time.h"
#include <string>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Time t1(3, 4, 5);
	Time t2(1, 20, 50);
	Time t3;
	Time t4;

	cout << "\nt1 = "; 
	t1.ShowTime();
	cout << "\nt2 = ";
	t2.ShowTime();
	
	t3 = t1 + t2;
	cout << "\nt1 + t2 = ";
	t3.ShowTime();

	t3 = t1 - t2;
	cout << "\nt1 - t2 = ";
	t3.ShowTime();

	t3 = t1 + 36.6;
	cout << "\nt3 = t1 + 36.6 = ";
	t3.ShowTime();

	t4 = 36.6 + t1;
	cout << "\nt4 = 36.6 + t1 = ";
	t4.ShowTime();

	if (t1 > t2) {
		cout << "\nt1 > t2";
	}
	else {
		cout << "\nt1 < t2";
	}

	if (t3 >= t4) {
		cout << "\nt3 >= t4";
	}
	if(t3 <= t4) {
		cout << "\nt3 <= t4";
	}
	if (t3 == t4) {
		cout << "\nt3 == t4";
	}

	return 0;
}