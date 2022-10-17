#pragma once
#include <iostream>
#include <string>
#include "Time.h"



Time::Time(int hour, int minute, int second)
{
	if (second >= 60)
	{
		second -= 60;
		minute++;
	}

	if (minute >= 60)
	{
		minute -= 60;
		hour++;
	}
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
	std:: cout << hour << ":" << minute << ":" << second << "\n";
}


void Time::AddTime(Time& time1, Time& time2) {
	int hour = time1.get_hour() + time2.get_hour();
	int minute = time1.get_minute() + time2.get_minute();
	int second = time1.get_second() + time2.get_second();
	
	if (second >= 60)
	{
		second = second - 60;
		minute ++;
	}
	if (minute >= 60)
	{
		minute = minute - 60;
		hour ++;
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
