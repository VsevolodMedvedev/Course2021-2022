#pragma once
#include "Dot.h"
#include <string>
using namespace std;


class Triangle {
public:
	class NotExistsError {
	public:
		string message;
		NotExistsError(string m) {
			message = m;
		}
	};
	Triangle(Dot, Dot);
	Triangle(Dot, Dot, Dot);
	void Sides();
	double Perimetr();
	double Area();

private:
	Dot a;
	Dot b;
	Dot c;


};
/*
class NotExistsError {
public:
	string message;
	NotExistsError(string triangle) :message(triangle) {}
};
*/

 