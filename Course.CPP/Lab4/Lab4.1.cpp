#include <iostream>
#include <cmath> 

using namespace std;

int func(double a, double b, double c, double &x1, double &x2)
{
    double d = b*b - 4*a*c;
    
    if (d<0){
        return -1;
    }
    else if (d == 0){
        x1 = -b /(2*a);
        x2 = x1;
        return 0;
    }
    else {
        x1 = (-b + pow(d, 0.5))/(2*a);
        x2 = (-b - pow(d, 0.5))/(2*a);
        return 1;
    }
}

int main()
{
double a, b, c, x1, x2;
cout << "Please enter coefficient 'a'\n"; 
cin >> a;
cout << "Please enter coefficient 'b'\n"; 
cin >> b;
cout << "Please enter coefficient 'c'\n"; 
cin >> c;

int res = func (a, b, c, x1, x2);
if (res == -1)
{
    cout << "Quadratic equation solution is " << res <<"\n"<<"x1 and x2 not exist";
} else {
    cout << "Quadratic equation solution is " << res <<"\n"<<"x1 = "<<x1<<"\tx2 = "<<x2;  
	}
}
