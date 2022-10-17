#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
public:
    Triangle(double side1, double side2, double side3);
    void SquareTriangle();
private:
    double a;
    double b;
    double c;
};

class TriangleError
{
public:
    TriangleError();
    void ErrorMessage();
private:
    string message;
};