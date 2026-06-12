// Write a program to Second largest element
#include<iostream>
using namespace std;
int main()
{
int arr[10],temp,n;

cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{
cout<<"enter arr["<<i<<"]::";cin>>arr[i];
}
for (int i = 0; i < n; i++)
{for (int j = 0; i < n-i-1; j++)
{ if (arr[j]>arr[j+1])
{
    temp=arr[j+1];
    arr[j+1]=arr[j];
    arr[j]=temp;
}   
}
}
cout<<arr[n-2]<<" is the secomd largest number ";
return 0;
}