// Write a program to Count even and odd elements.
#include<iostream>
using namespace std;
int main()
{
int arr[10],n,odd,even;
cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{cout<<"arr["<<i+1<<"]::";cin>>arr[i];}

odd=0;
even=0;
for (int i = 0; i < n; i++)
{
if (arr[i]%2==0)
{
   even++;
}
else 
{
    odd++;
}}

cout<<"there are "<<odd<<" odd numbers"<<endl<<"and "<<even<<" even numbers";


return 0;
}