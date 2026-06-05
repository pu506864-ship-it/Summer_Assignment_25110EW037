#include<iostream>
using namespace std;
int main()
{
int num,digits=0,product=1;
cout<<"enter a number::"<<endl;
cin>>num;
while (num>0)
{
digits=num%10;
product= digits*product;
num=num/10;

}
cout<<product;
return 0;
}