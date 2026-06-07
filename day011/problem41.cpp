// Write a program to Write function to find sum of two numbers.
#include<iostream>
using namespace std;
int sum(int a,int b);

int main()
{
int a,b;
cout<<"enter two number to print there sum::";cin>>a>>b;
cout<<"sum of "<<a<<" and "<<b<<" is::"<<sum(a,b);

return 0;
}
int sum(int a,int b){
    int sum=0;
    sum=a+b;
    return sum;
}