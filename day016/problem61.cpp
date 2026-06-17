// WRITE A PROGRAM TO FIND MISSING NUMBER IN ARRAY.
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
   if (arr[i]!=arr[i+1]-1)
   {
   ansarr[c]=(arr[i]+arr[i+1])/2;
   c++;
   }
}
cout<<"thes are the missing numbers ::";
for (int i = 0; i <c-1; i++)
{
   cout<<ansarr[i]<<",";
}
return 0;
}