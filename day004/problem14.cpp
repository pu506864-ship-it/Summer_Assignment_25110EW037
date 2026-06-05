#include<iostream>
using namespace std;
int main()
{
int i,a=0,b=1,temp,n;
cout<<"enter number to print nth  fibonacci term::";
cin>>n;
for ( i=2; i <=n; i++)
{
    

   temp=a;;
    a=b;
    b=temp+a;
}
cout<<n<<"th term of fibonacci is::"<<b;
return 0;
}