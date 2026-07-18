// Write a program to Merge arrays.
#include<iostream>
using namespace std;
int main()
{
 int arr1[10],arr2[10],size,arrR[20],n,m;
 cout<<"ENTER SIZE OF 1ST ARRAY::";
 cin>>n;
 cout<<"ENTER SIZE OF 2ND ARRAY::";
 cin>>m;
 cout<<"ENTER ELEMENTS OF 1st ARRAY::"<<endl;
 for (int i = 0; i < n; i++)
 {
   cout<<"ENTER arr1["<<i<<"]::";
   cin>>arr1[i];
 }
 cout<<"ENTER ELEMENTS OF 2nd ARRAY::"<<endl;
 for (int i = 0; i < n; i++)
 {
   cout<<"ENTER arr2["<<i<<"]::";
   cin>>arr2[i];
 }
 cout<<"YOUR FIRST ARRAY IS ::[";
 for (int i = 0; i < n; i++)
 {
  cout<<arr1[i]<<",";
 }cout<<"]"<<endl;
 cout<<"YOUR SECOND ARRAY IS ::[";
 for (int i = 0; i < n; i++)
 {
  cout<<arr2[i]<<",";
 }cout<<"]"<<endl;
 
 for (int i = 0; i < n; i++)
 {
arrR[i]=arr1[i];
}
for (int i = 0; i < m; i++)
 {
arrR[n+i]=arr2[i];
}
cout<<"MERGED ARRAY IS [";
for (int i = 0; i < n+m; i++)
{
cout<<arrR[i]<<",";
}
cout<<"]";

 
return 0;
}