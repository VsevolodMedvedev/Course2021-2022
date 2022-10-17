#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(double x1, double y1) {
    x = x1;
    y = y1;
}


double Point::Distance()
{
    return sqrt((x * x) + (y * y));
}

bool operator< (Point& p1, Point& p2)
{
    return p1.Distance() < p2.Distance();
}
ostream& operator<< (ostream& out, Point& a)
{
    out << "Point(" << a.x << ", " << a.y << ") = " << a.Distance();
    return out;
}