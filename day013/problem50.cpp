// Write a program to Find sum and average of array
#include<iostream>
using namespace std;
int main()
{
int arr[10],n,sum=0;
float avg=0;
cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{
cout<<"enter arr["<<i<<"]::";cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
sum+=arr[i];
avg=(float)sum/n;
}
cout<<"sum of the array elements:: "<<sum<<endl<<"avg of array elements::"<<avg;

return 0;
}