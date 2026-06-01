#include<iostream>
using namespace std;
int main()
{
int i,a=0,b=1,temp,n;
cout<<"enter number tu print fibonacci series upto n::";
cin>>n;
cout<<a<<" "<<b<<" ";
for ( i=2; i <=n; i++)
{
    cout<<a+b<<" ";

   temp=a;;
    a=b;
    b=temp+a;
}

return 0;
}