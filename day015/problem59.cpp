// Write a program to Rotate array right.
#include<iostream>
using namespace std;
int main()
{
int arr[10],n,s,temp;

cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{
cout<<"ENTER ARR["<<i<<"]::";cin>>arr[i];
}
cout<<"ENTER SIZE TO ROTATE RIGHT AN ARRAY::";cin>>s;
for (int i = 0; i <s; i++)
{ temp=arr[n-1];
for (int j=n-1; j>=0; j--)
{
  
arr[j+1]=arr[j];
}
arr[0]=temp;


}cout<<"[";
for (int i = 0; i < n; i++)
{
cout<<arr[i]<<",";
}
cout<<"]";

return 0;
}