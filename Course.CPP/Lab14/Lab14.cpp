#include <iostream>

using namespace std;

template<class T>
T average(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum / size;
}

template<class T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "Average is: " << average(arr, size) << "\t" << typeid(arr).name()<<"\n";

}

int main()
{
    int arr[] = { 10, 20, 50, 3, 45, 122, -54 };
    double arrd[] = { 10.0, 20.0, 50.0, 3.0, 45.0, 122.0, -54.0 };
    long arrl[] = { 10, 20, 50, 3, 45, 122, -54 };
    char arrc[] = "Hello, world!";

    int size = sizeof(arr) / sizeof(arr[0]);
    int sized = sizeof(arrd) / sizeof(arrd[0]);
    int sizel = sizeof(arrl) / sizeof(arrl[0]);
    int sizec = sizeof(arrc) / sizeof(arrc[0]) - 1;

    printArray(arr, size); 
    printArray(arrd, sized);
    printArray(arrl, sizel);
    printArray(arrc, sizec);
   
}

