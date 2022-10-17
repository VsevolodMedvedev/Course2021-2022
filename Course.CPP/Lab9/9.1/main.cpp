#include <iostream>
#include "Triangle.h"
#include <string>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Please enter the length of the side a: \n";
    cin >> a;
    cout << "Please enter the length of the side b: \n";
    cin >> b;
    cout << "Please enter the length of the side c: \n";
    cin >> c;
    try
    {
        if ((a + b < c) or (a + c < b) or (b + c < a))
            throw TriangleError();
        Triangle test(a, b, c);
        cout << "Area = ";
        test.SquareTriangle();
    }
    catch(TriangleError& error)
    {
        cout << "Error: ";
        error.ErrorMessage();
        return 1;
    }
    return 0; 
}
