#include<iostream>
using namespace std;
int main()
{
int num,digits=0,reverse=0;
cout<<"enter a number:: "<<endl;
cin>>num;
while (num>0)
{
    digits=num%10;
    reverse=reverse*10+digits;
    num=num/10;

}
cout<<reverse;
return 0;
}