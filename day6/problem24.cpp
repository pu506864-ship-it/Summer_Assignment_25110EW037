// Write a program to Find x^n without pow(). 

#include<iostream>
using namespace std;
int pow(int n,int m);
int main()
{
    int number,power;
    cout<<"enter number::";cin>>number;
    cout<<"enter power ot calculate::";cin>>power;
    cout<<number<<" to the power "<<power<<"  is :: "<<pow(number,power);

return 0;
}
int pow(int n,int m){

    int i=1,num=1;

    while (i<=m)
    {
        num=num*n;
        i++;
    }
    return num;   
}