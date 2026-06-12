// Write a program to Input and display array. 
#include<iostream>
using namespace std;
int main()
{
int arr[10],n;
cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{
cout<<"enter arr["<<i<<"]::";cin>>arr[i];
}
cout<<"entered array is::[";

for (int i = 0; i < n; i++)
{
cout<<arr[i];
if (i!=n-1) 
{
   cout<<",";
}

}
cout<<"]";

return 0;
}