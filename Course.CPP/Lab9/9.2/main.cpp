#include <iostream>
#include "Time.h"
#include <string>

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    int hour, minute, second;
    try
    {
        cout << "Please enter the time:\n";
        cout << "Hours: ";
        cin >> hour;
        cout << "Minutes: ";
        cin >> minute;
        cout << "Seconds: ";
        cin >> second;
        Time time1(hour, minute, second);
        time1.ShowTime();

        cout << "Please enter the time:\n";
        cout << "Hours: ";
        cin >> hour;
        cout << "Minutes: ";
        cin >> minute;
        cout << "Seconds: ";
        cin >> second;
        Time time2(hour, minute, second);
        time2.ShowTime();

        Time time3;
        time3.AddTime(time1, time2);
        time3.ShowTime();
    }
    catch (Time::ErrorTime& ex)
    {
        cout << "\nError time is: " << ex.message << endl;
        cout << "\nError value is: " << ex.value << endl;
        return 1;
    }
    return 0;
}