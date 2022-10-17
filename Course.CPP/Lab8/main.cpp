#include <iostream>
#include "Time.h"
#include <string>

using namespace std;

int main()
{
    Time t1(15, 19, 51);
    t1.ShowTime();

    Time t2(8, 40, 9);
    t2.ShowTime();

    Time t3;
    t3.AddTime(t1, t2);
    t3.ShowTime();
}