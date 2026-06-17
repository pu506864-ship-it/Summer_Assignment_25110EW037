// WRITE A PROGRAM TO FIND MAXIMUM FREQUENCY ELEMENT.
#include<iostream>
using namespace std;

int main()
{
int arr[10],ans,n,c=0,count=0;

cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{
cout<<"ENTER ARR["<<i<<"]::";cin>>arr[i];
}
ans=arr[0];
for (int i = 0; i < n; i++)
{
    c=0;
    for (int j = 0; j < n; j++)
{
   if (arr[i]==arr[j])
   {
   c++;
   }}
 if (count<c)
 {
   ans=arr[i];
   count=c;
 }

}
cout<<"maximum element frequency number is -->> "<<ans;
return 0;
}