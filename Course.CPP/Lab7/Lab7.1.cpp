#include <iostream>
#include <windows.h>

using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;

};

Time AddTime(const Time &t1, const Time &t2)
{
	Time t;	
	t.hours = t1.hours + t2.hours;
	t.minutes = t1.minutes + t2.minutes;
	t.seconds = t1.seconds + t2.seconds;

	if (t.seconds >= 60)
	{
		t.seconds -= 60;
		t.minutes++;
	}
	if (t.minutes >= 60)
	{
		t.minutes -= 60;
		t.hours++;
	}
	return t;
}

Time InputTime()
{
	Time t;
	cout << "Please enter the number of hours: ";
	cin >> t.hours;
	cout << "Please enter the number of minutes: ";
	cin >> t.minutes;
	cout << "Please enter the number of seconds: ";
	cin >> t.seconds;
	return t;
}

void ShowTime(Time t)
{
	cout << t.hours << " hours - " << t.minutes << " minutes - " << t.seconds << " seconds\n";
}

int main()
{
	Time t1 = InputTime();
	Time t2 = InputTime();
	Time t3 = AddTime(t1, t2);
	ShowTime(t3);

		return 0;
}