#include "Dot.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

int main() {
	double x, y;

	try {
		cout << "Example 1. Composition.\n";
		cout << "Please enter the coordinates of dot A.\nx: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		Dot a(x, y);
		cout << "\nPlease enter the coordinates of dot B.\nx: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		Dot b(x, y);
		
		Triangle* test1 = new Triangle(a, b);
		test1->Sides();
		cout << "\nPerimetr = " << test1->Perimetr();
		cout << "\nArea = " << test1->Area();
		delete test1;
		
		cout << "\n\nExample 2. Agregation.";
		cout << "\nPlease enter the coordinates of dot C.\nx: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		Dot c(x, y);

		Triangle* test2 = new Triangle(a, b, c);
		test2->Sides();
		cout << "\nPerimetr = " << test2->Perimetr();
		cout << "\nArea = " << test2->Area();
		delete test2;
 }

	catch (Triangle::NotExistsError& ex)
	{
		cout << "\nError: " << ex.message;
	}

}

