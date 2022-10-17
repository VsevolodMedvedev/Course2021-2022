#include <iostream>
using namespace std;

void main()
{
	system("chcp 1251");
	double square;
	double x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
	cout << "\nВведите x1 и y1:\n";
	cin >> x1;
	cin >> y1;
	cout << "\nВведите x2 и y2:\n";
	cin >> x2;
	cin >> y2;
	cout << "\nВведите x3 и y3:\n";
	cin >> x3;
	cin >> y3;
	cout << "\nВведите x4 и y4:\n";
	cin >> x4;
	cin >> y4;
	cout << "\nВведите x5 и y5:\n";
	cin >> x5;
	cin >> y5;
	square = 0.5 * (x1*y2+x2*y3+x3*y4+x4*y5+x5*y1 - x2*y1-x3*y2-x4*y3-x5*y4-x1*y5);
	if (square < 0)
		square = -square;
	cout << "Площадь пятиугольника равна: " << square << "\n";

}