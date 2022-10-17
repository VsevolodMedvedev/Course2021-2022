#pragma once
#include <iostream>
#include <string>
#include "Time.h"

using namespace std;

Time::Time(int hour, int minute, int second)
{
	if (second >= 60) throw ErrorTime("seconds", second);
	if (minute >= 60) throw ErrorTime("minutes", minute);
	Time::set_hour(hour);
	Time::set_minute(minute);
	Time::set_second(second);
}

Time::Time()
{
	Time::set_hour(0);
	Time::set_minute(0);
	Time::set_second(0);
}

void Time::ShowTime()
{
	std::cout << hour << ":" << minute << ":" << second << "\n";
}


void Time::AddTime(Time& time1, Time& time2) {
	int hour = time1.get_hour() + time2.get_hour();
	int minute = time1.get_minute() + time2.get_minute();
	int second = time1.get_second() + time2.get_second();

	if (second >= 60)
	{
		second = second - 60;
		minute++;
	}
	if (minute >= 60)
	{
		minute = minute - 60;
		hour++;
	}
	Time::set_hour(hour);
	Time::set_minute(minute);
	Time::set_second(second);
}

void Time::set_hour(int hour) {
	Time::hour = hour;
};
int Time::get_hour()
{
	return Time::hour;
}
void Time::set_minute(int minute) {
	Time::minute = minute;
};
int Time::get_minute()
{
	return Time::minute;
}
void Time::set_second(int second) {
	Time::second = second;
};
int Time::get_second()
{
	return Time::second;
}


//Перегрузка бинарных операторов
bool operator > (const Time& t1, const Time& t2)
{
	return (t1.hour * 3600 + t1.minute * 60 + t1.second) > (t2.hour * 3600 + t2.minute * 60 + t2.second);
}

bool operator< (const Time& t1, const Time& t2)
{
	return (t1.hour * 3600 + t1.minute * 60 + t1.second) < (t2.hour * 3600 + t2.minute * 60 + t2.second);
}
bool operator>= (const Time& t1, const Time& t2)
{
	return (t1.hour * 3600 + t1.minute * 60 + t1.second) >= (t2.hour * 3600 + t2.minute * 60 + t2.second);
}
bool operator<= (const Time& t1, const Time& t2)
{
	return (t1.hour * 3600 + t1.minute * 60 + t1.second) <= (t2.hour * 3600 + t2.minute * 60 + t2.second);
}
bool operator== (const Time& t1, const Time& t2)
{
	return (t1.hour * 3600 + t1.minute * 60 + t1.second) == (t2.hour * 3600 + t2.minute * 60 + t2.second);
}

//сложение объектов Time
Time Time::operator+ (const Time& t) const
{
	int h = hour + t.hour;
	int m = minute + t.minute;
	int s = second + t.second;
	if (s >= 60)
	{
		s -= 60;
		m++;
	}
	if (m >= 60)
	{
		m -= 60;
		h++;
	}
	return Time(h, m, s);
}
// сложение объекта Time и вещественного числа

Time Time:: operator+ (const float& r) const
{
	int h = hour;
	int m = minute;
	int s = second + int(round(r));
	while (s >= 60)
	{
		s -= 60;
		m++;
	}
	while (m >= 60)
	{
		m -= 60;
		h++;
	}
	return Time(h, m, s);
}

// сложение объекта Time и вещественного числа
Time operator+ (float r, const Time& t)
{
	int h = t.hour;
	int m = t.minute;
	int s = t.second + int(round(r));
	while (s >= 60)
	{
		s -= 60;
		m++;
	}
	while (m >= 60)
	{
		m -= 60;
		h++;
	}
	return Time(h, m, s);
}

//вычитание объектов Time
Time Time::operator- (const Time& t) const
{
	int s = second - t.second;
	int m = minute - t.minute;
	int h = hour - t.hour;

		if (s < 0)
		{
			s = 60 + second - t.second;
			m--;
		}
		if (m < 0)
		{
			m = 60 + minute - t.minute;;
			h--;
		}
		if (h < 0) {
			return Time(0, 0, 0);
		}

		return Time(h, m, s);
	
}

