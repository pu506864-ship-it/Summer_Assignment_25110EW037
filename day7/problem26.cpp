// Write a program to Recursive Fibonacci
#include<iostream>
using namespace std;
int fibonacci(int n);
int main()
{
    int Num;
    cout<<"ENTER A NUMBER TO PRINT FIBONACCI SERIES UPTO IT ::";cin>>Num;
    for (int i = 0; i <Num; i++)
    {
         cout<<fibonacci(i)<<" ";
    }
return 0;
}
int fibonacci(int n){
    if(n==0){
        return 0 ;
    }
    else if(n==1){
            return 1;
    }
else{
    return fibonacci(n-1)+fibonacci(n-2);
}
}