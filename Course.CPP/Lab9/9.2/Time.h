#pragma once
#include <string>

using namespace std;

class Time {
public:
	class ErrorTime {
	public:
		string message;
		int value;
	
		ErrorTime(string m, int v) {
			message = m;
			value = v;
		}
	};
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

private:
	int hour;
	int minute;
	int second;

};

