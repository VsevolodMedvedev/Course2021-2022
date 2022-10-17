#include <iostream>
#include <cmath>
#include "Triangle.h"
#include <string>


Triangle::Triangle(double side1, double side2, double side3)
    {
        a = side1;
        b = side2;
        c = side3;
    }

void Triangle::SquareTriangle()
    {
        double Perimeter = a + b + c;
        cout << sqrt((Perimeter/2) * ((Perimeter/2) - a) * ((Perimeter / 2) - b) * ((Perimeter / 2) - c));
    }

TriangleError::TriangleError() {
    message = "The sum of two sides of a triangle is less than the third.";
} 

void TriangleError::ErrorMessage() { 
    cout << message << endl; 
}
