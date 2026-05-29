#include<iostream>
using namespace std;
int main()
{
int num,num2,digits=0,reverse=0;
cout<<"enter a number:: "<<endl;
cin>>num;
num2=num;
while (num>0)
{
    digits=num%10;
    reverse=reverse*10+digits;
    num=num/10;

}
if (num2==reverse)
{
cout<<"number\t["<<num2<<"]  is a palindrome number"<<endl;
}
else{
    cout<<"number\t[" <<num2<< "] is not palindromme number "<<endl;

}
return 0;
}