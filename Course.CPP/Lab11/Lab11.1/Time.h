#pragma once
#include <string>

using namespace std;

class Time {
public:
	Time(int, int, int);
	Time();
	void ShowTime();
	void AddTime(Time&, Time&);
	void set_hour(int);
	int get_hour();
	void set_minute(int);
	int get_minute();
	void set_second(int);
	int get_second();

	Time operator+ (const Time&) const; //сложение объектов Time
	Time operator- (const Time&) const; //вычитание объектов  Time
	Time operator+ (const float&) const; //сложение объекта Time и вещественного числа
	friend Time operator+ (const float, const Time&); // сложение вещественного числа и объекта Time 
	//сравнение двух объектов
	friend bool operator> (const Time&, const Time&);
	friend bool operator< (const Time&, const Time&);
	friend bool operator>= (const Time&, const Time&);
	friend bool operator<= (const Time&, const Time&);
	friend bool operator== (const Time&, const Time&);

private:
	int hour;
	int minute;
	int second;

};
