#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	char chois;
	double x, y;

	int points = 0;
	cout << "Please press 1 to select classic shooting\n" << "Please press 2 to select floating target shooting \n" << "Please press 3 to select jamming shooting \n" << "Please press 4 to select shooting up to 50 points \n";
	cin >> chois;
	switch (chois)
	{
	case '1':
		for (int i = 1; i < 4; i++)
		{
			cout << "Please enter the value of x. The shot #" << i << "\n";
			cin >> x;
			cout << "Please enter the value of y. The shot #" << i << "\n";
			cin >> y;

			if (x * x + y * y <= 1)
			{
				points = points + 10;
			}
			else if (x * x + y * y <= 2)
			{
				points = points + 5;
			}
		}
		cout << "The number of points you score: " << points;
		break;

	case '2':
		for (int i = 1; i < 4; i++)
		{
			double floatingX = rand() % 3;
			double floatingY = rand() % 3;
			cout << "Please enter the value of x. The shot #" << i << "\n";
			cin >> x;
			cout << "Please enter the value of y. The shot #" << i << "\n";
			cin >> y;

			if ((x + floatingX) * (x + floatingX) + (y + floatingY) * (y + floatingY) <= 1)
			{
				points = points + 10;
			}
			else if ((x + floatingX) * (x + floatingX) + (y + floatingY) * (y + floatingY) <= 2)
			{
				points = points + 5;
			}
		}
		cout << "The number of points you score: " << points;
		break;

	case '3':
		for (int i = 1; i < 4; i++)
		{			
			double jammingX = rand() % 4 * (rand() % 2 - 1);
			double jammingY = rand() % 4 * (rand() % 2 - 1);
			cout << "Please enter the value of x. The shot #" << i << "\n";
			cin >> x;
			x = x + jammingX;
			cout << x;
			cout << "Please enter the value of y. The shot #" << i << "\n";
			cin >> y;
			y = y + jammingY;
			cout << y;
			if (x * x + y * y <= 1)
			{
				points = points + 10;
			}
			else if (x * x + y * y <= 2)
			{
				points = points + 5;
			}

		}
		cout << "The number of points you score: " << points;
		break;


	case '4':
		int nums = 0;
		while (points < 50)
		{
			cout << "Please enter the value of x\n";
			cin >> x;
			cout << "Please enter the value of y\n";
			cin >> y;

			if (x * x + y * y <= 1)
			{
				points = points + 10;
			}
			else if (x * x + y * y <= 2)
			{
				points = points + 5;
			}
			nums++;
		}
		
		if (nums == 5)
		{
			cout << "Number of shots : " << nums << ". Your level is 'Sniper'";
		}
		else if (nums <= 10)
		{
			cout << "Number of shots : " << nums << ". Your level is 'Shooter'";
		}
		else
		{
			cout << "Number of shots : " << nums << ". Your level is 'Beginner'";
		}

		break;

	}
}
