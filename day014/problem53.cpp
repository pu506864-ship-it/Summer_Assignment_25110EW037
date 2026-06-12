// Write a program to Linear search.
#include<iostream>
using namespace std;
int main()
{
int arr[10],n,target;

cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{
cout<<"enter arr["<<i<<"]::";cin>>arr[i];
}
cout<<"ENTER TARGET TO FIND IN ARRAY::";cin>>target;
for (int i = 0; i < n; i++)
{
if (arr[i]==target)
{
   cout<<"target found at ["<<i+1<<"] index"<<endl;
   return 0;
}



}
cout<<"target not found";
return 0;
}