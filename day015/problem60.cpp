// Write a program to Move zeroes to end.
#include<iostream>
using namespace std;
int main()
{
int arr[10],ansarr[10],n,c=0,s,temp;

cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{
cout<<"ENTER ARR["<<i<<"]::";cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
   if (arr[i]==0)
   {
   ansarr[n-c-1]=arr[i];
   c++;
   }
}
c=0;
for (int i = 0; i < n; i++)
{
   if (arr[i]!=0)
   {
   ansarr[c]=arr[i];
   c++;
   }
}
cout<<"[";
for (int i = 0; i < n; i++)
{
cout<<ansarr[i]<<",";
}
cout<<"]";

return 0;
}