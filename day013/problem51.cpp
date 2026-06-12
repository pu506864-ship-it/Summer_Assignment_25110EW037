// Write a program to Find largest and smallest element.
#include<iostream>
using namespace std;
int main()
{
int arr[10],n,max,min;
cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{cout<<"arr["<<i+1<<"]::";cin>>arr[i];}

max=0;
min=10000;
for (int i = 0; i < n; i++)
{
if (arr[i]>max)
{
    max=arr[i];
}
if (arr[i]<min)
{
    min=arr[i];
}}

cout<<"max::"<<max<<endl<<"min::"<<min;


return 0;
}