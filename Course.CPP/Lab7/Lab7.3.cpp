#include <iostream>
#include <cmath>
#include <string>
#include <tuple>
using namespace std;

using Tuple = tuple <double, double, int>;

Tuple SQE(double a, double b, double c)
{
    double x1 = 0; 
    double x2 = 0;
    int flag = 0;

    double d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + pow(d, 0.5)) / (2 * a);
        x2 = (-b - pow(d, 0.5)) / (2 * a);
        flag = 2;
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        x2 = x1;
        flag = 1;
    }
    return make_tuple(x1, x2, flag);
}

int main()
{
    double a, b, c;
    cout << "Please enter coefficient 'a'\n";
    cin >> a;
    cout << "Please enter coefficient 'b'\n";
    cin >> b;
    cout << "Please enter coefficient 'c'\n";
    cin >> c;
    Tuple s1 = SQE(a, b, c);
    cout << "x1 = " << get<0>(s1) << "\tx2 = " << get<1>(s1) <<"\tNumber of roots:  "<< get<2>(s1) << endl;
    return 0;
}
