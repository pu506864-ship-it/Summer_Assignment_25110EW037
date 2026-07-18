// Write a program to Find common elements
#include<iostream>
using namespace std;

int main()
{
 int arr1[10],arr2[10],size,arrR[20],n,m,k=0;
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
   for (int j = 0; j < m; j++)
   {
    if (arr1[i]==arr2[j])
    {
        arrR[k]=arr1[i];
        k++;
    }
    
   }
}
cout<<"COMMON ELEMENTS OF BOTH ARRAYS IS [";
for (int i = 0; i < k; i++)
{
cout<<arrR[i]<<",";
}
cout<<"]";

return 0;
}