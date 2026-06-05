// Write a program to Recursive factorial
#include<iostream>
using namespace std;
int factorial(int n);

int main()
{int Num;
    cout<<"enter a number to find there to check there factorial:: ";cin>>Num;
    cout<<Num<<"! is ="<<factorial(Num);

return 0;
}
int factorial(int n){
    if(n==1){
        return 1;
        
    }
    else {
        return n*factorial(n-1);
    }
    
    
}
