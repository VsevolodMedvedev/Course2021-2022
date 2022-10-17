#include <iostream>
using namespace std;
int main()
{
	char chois;
	int year;

	cout << "Please enter the number of the year \n";
	cin >> year;
	cout << "Please press 1 to select if-else case and press 2 to select logic case\n";
	do 
	{
		cin >> chois;
		switch (chois)
		{
		case '1':
			if (year % 400 == 0)
			{
			cout << "leap year\n";
			break;
			}
			else if (year % 4 == 0)
			{
				if (year % 100 != 0)
					cout << "leap year\n";
				break;
			}
			else 
				cout << "not leap year\n";
			break;
			

		case '2':
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			{
				cout << "leap year\n";
				break;
			}
			
			else
			{
				cout << "not leap year\n";
				break;
			}
		
		default:
			cout << "Please press 1 to select if-else case and press 2 to select logic case\n";

		}

	}
	while (chois != '1' && chois != '2');

	return 0;
}
