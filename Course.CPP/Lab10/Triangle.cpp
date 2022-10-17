#include <math.h>
#include "Dot.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

//composition
Triangle::Triangle(Dot a, Dot b) {
	this->a = a;
	this->b = b;
	this->c = Dot();
	if ((a.distanceTo(b) + b.distanceTo(c) <= c.distanceTo(a)) or (a.distanceTo(b) + c.distanceTo(a) <= b.distanceTo(c))
		or (a.distanceTo(b) >= c.distanceTo(a) + b.distanceTo(c)))
		throw NotExistsError("It is not triangle");
}

//agregation
Triangle::Triangle(Dot a, Dot b, Dot c) {
	this->a = a;
	this->b = b;
	this->c = c; 
	if ((a.distanceTo(b) + b.distanceTo(c) <= c.distanceTo(a)) or (a.distanceTo(b) + c.distanceTo(a) <= b.distanceTo(c))
		or (a.distanceTo(b) >= c.distanceTo(a) + b.distanceTo(c)) )
		throw NotExistsError("It is not triangle"); 
}
void Triangle::Sides() {
	cout << "Side 1 = " << a.distanceTo(b);
	cout << "\tSide 2 = " << b.distanceTo(c);
	cout << "\tSide 3 = " << c.distanceTo(a);

}
double Triangle::Perimetr() {
	return a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a);
}
double Triangle::Area() {
	double Per = this->Perimetr();
	return sqrt((Per / 2) * ((Per / 2) - a.distanceTo(b)) * ((Per / 2) - b.distanceTo(c)) * ((Per / 2) - c.distanceTo(a)));
}