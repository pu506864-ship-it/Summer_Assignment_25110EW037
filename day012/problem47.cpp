// Write a program to Write function for Fibonacci.
#include<iostream>
using namespace std;
void fibonacci(int n);
int main()
{
    int n;
    cout<<"enter number tu print fibonacci series upto n::";
    cin>>n;
    fibonacci(n);

return 0;
}
void fibonacci(int n)
{
int i,a=0,b=1,temp;

cout<<a<<" "<<b<<" ";
for ( i=2; i <=n; i++)
{
    cout<<a+b<<" ";

   temp=a;;
    a=b;
    b=temp+a;
}

return ;
}