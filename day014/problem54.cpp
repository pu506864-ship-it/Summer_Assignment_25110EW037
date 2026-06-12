// Write a program to Frequency of an element
#include<iostream>
using namespace std;
int main()
{
int arr[10],n,target,count=0;

cout<<"ENTER SIZE OF ARRAY::";cin>>n;
for (int i = 0; i < n; i++)
{
cout<<"enter arr["<<i<<"]::";cin>>arr[i];
}
cout<<"ENTER TARGET TO COUNT ITS FREQUENCY IN ARRAY::";cin>>target;
for (int i = 0; i < n; i++)
{
if (arr[i]==target)
{
   count++;

}
}
if (count>0)
{
cout<<"frequency of ["<<target<<"] in array = ["<<count<<"]"<<endl;
}
else{
cout<<"target not found";}
return 0;
}