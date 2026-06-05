#include<iostream>
using namespace std;
int main()
{
int num,digits=0,sum=0;
cout<<"enter a number::"<<endl;
cin>>num;
while (num>0)
{
digits=num%10;
sum= digits+sum;
num=num/10;

}
cout<<sum;
return 0;
}