#include <iostream>
#include <cmath> 

using namespace std;

bool Input(int &a, int &b) {
    cout << "Please enter two numbers\n";
    cin >> a;
    cin >> b;
    
    if (a*b) //Проверка на тип введенных с консоли переменных a и b
    {
        return true;
    } else {
        return false;
    }
}

int main()
{
int a, b;
 if(Input(a,b)== false)
 {
 cerr << "error";
 return 1;
 }
 int s = a + b;
 cout <<s;
 return 0;
}