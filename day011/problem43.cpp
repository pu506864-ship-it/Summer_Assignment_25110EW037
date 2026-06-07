// Write a program to Write function to check prime.
#include<iostream>
using namespace std;
void prime(int a);

int main()
{
int a;
cout<<"enter a number to check it is a prime number or not::";cin>>a;
prime(a);

return 0;
}
void prime(int a){
    int i=1,count=0;
   while (i<=a)
   {
    if (a%i==0)
    {
        count++;
    }
    if (count==2)
{
    cout<<a<<" is a prime number ";
return;
}
else{
    cout<<a<<" is not a prime number ";
    return;
    
}
i++;
      
    
}}