#include <iostream>
#include <cmath> 

using namespace std;

void createArray (int Arr[], int n);
void showArray (int Arr[], int n);
void sumNegs (int Arr[], int n);
void sumPos (int Arr[], int n);
void sumEven (int Arr[], int n);
void sumOdd (int Arr[], int n);
void showMinMax (int Arr[], int n);
void multMinMax(int Arr[], int n);
void sort(int Arr[], int n);

int main()
{
int a;
cout<<"Please enter a size of array\n";
cin>>a;
const int n = a;

int mas[n];
createArray(mas, n);
showArray(mas, n);
sumNegs(mas, n);
sumPos(mas, n);
sumEven(mas, n);
sumOdd(mas, n);
showMinMax(mas, n);
multMinMax(mas,n);
sort(mas, n);
}


void createArray (int Arr[], int n){
    /*cout<<"Please enter a size of array";
    cin>>n;*/
    cout<<"Please enter "<<n<<" numbers\n";
    for(int i=0; i<n; i++){
        cin>>Arr[i];
    }
}

void showArray (int Arr[], int n){
    cout<<"\nArray: ";
    for(int i=0; i<n; i++){
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

void sumNegs (int Arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if (Arr[i]<0){
            sum = sum + Arr[i];
        }
    }
    cout<< "Sum of negative elements = "<< sum;
    cout<< "\n";   
}

void sumPos (int Arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if (Arr[i]>0){
            sum = sum + Arr[i];
        }
    }
    cout<< "Sum of positive elements = "<< sum;
    cout<< "\n";   
}

void sumEven (int Arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if (i%2==0){
            sum = sum + Arr[i];
        }
    }
    cout<< "Sum of even elements = "<< sum;
    cout<< "\n";   
}

void sumOdd (int Arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        if (i%2!=0){
            sum = sum + Arr[i];
        }
    }
    cout<< "Sum of odd elements = "<< sum;
    cout<< "\n";   
}

void showMinMax (int Arr[], int n){
    int max = Arr[0];
    int imax = 0;
    int min = Arr[0];
    int imin = 0;
    for (int i = 1; i<n; i++){
        if(Arr[i]>=max){
            max = Arr[i];
            imax = i;
        }
        if(Arr[i]<=min){
            min = Arr[i];
            imin = i;
        }
    }
    cout<<"#PosMax\tMax\t\t#PosMin\tMin\n";
    cout<<imax<<"\t"<<max<<"\t\t"<<imin<<"\t"<<min;
}

void multMinMax(int Arr[], int n){
    int max = Arr[0];
    int imax = 0;
    int min = Arr[0];
    int imin = 0;
    for (int i =1; i<n; i++){
        if(Arr[i]>=max){
            max = Arr[i];
            imax = i;
        }
        if(Arr[i]<=min){
        min = Arr[i];
        imin = i;
    }
}
int mult=1;
if(imin<imax){
for(int i = imin+1; i<imax; i++){
    mult = (mult) * Arr[i];
}
}else{
for(int i = imax+1; i<imin; i++){
    mult = (mult) * Arr[i];
}
}
if ((imax-imin)==1 || (imax-imin)==-1)
{
    cout<<"\nThe product of the numbers between min and max = NULL";
} else {
    cout<<"\nThe product of the numbers between min and max = "<<mult;  
    }
}

void sort(int Arr[], int n){
    int min = 0; 
    int buf = 0;
    for (int i = 0; i < n; i++)
 {
 min = i;
 for (int j = i + 1; j < n; j++)
 min = ( Arr[j] < Arr[min] ) ? j : min; if (i != min)
 {
 buf = Arr[i];
 Arr[i] = Arr[min];
 Arr[min] = buf;
 }
 }
showArray(Arr, n);
}