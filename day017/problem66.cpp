// Write a program to Union of arrays
#include<iostream>
using namespace std;
bool not_exist(int arr[],int n,int j);
int main()
{
 int arr1[10],arr2[10],arrR[20],n,m,j=0;
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
if (not_exist(arrR,arr1[i],j))
{
   arrR[j]=arr1[i];
   j++;
}
}


for (int i = 0; i < m; i++)
 {
if (not_exist(arrR,arr2[i],j))
{
   arrR[j]=arr2[i];
   j++;
}
}
 cout<<"YOUR RESULTENT ARRAY AFTER TAKING UNION OF TWO ARRAYS::[";
 for (int i = 0; i < j; i++)
 {
   cout<<arrR[i]<<",";

 }
 cout<<"]";
 
 
return 0;
}
bool not_exist(int arr[],int n,int j){
    int count=0;
    for (int i = 0; i < j; i++)
    {
        if (arr[i]==n)
        count++;
    }
    if( count==0){
        return true;
    }
    else{
        return false;
    }
}