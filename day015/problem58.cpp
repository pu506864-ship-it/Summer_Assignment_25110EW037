// Write a program to Rotate array left
#include<iostream>
using namespace std;
int main()
{
int arr[10],n,s,temp;

cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{
cout<<"enter arr["<<i<<"]::";cin>>arr[i];
}
cout<<"ENTER SIZE TO ROTATE LEFT ARRAY::";cin>>s;
for (int i = 0; i < s; i++)
{ temp=arr[0];
for (int j =1; j < n; j++)
{
  
arr[j-1]=arr[j];
}
arr[n-1]=temp;


}
for (int i = 0; i < n; i++)
{
cout<<arr[i]<<",";}
return 0;
}