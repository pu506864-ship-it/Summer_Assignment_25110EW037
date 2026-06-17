// WRITE A PROGRAM TO FIND PAIR WITH GIVEN SUM
#include<iostream>
#include<vector>
using namespace std;

int main()
{
int arr[10],n,target;
vector<int> ans ;
cout<<"ENTER SIZE OF ARRAY::";cin>>n;

for (int i = 0; i < n; i++)
{
cout<<"ENTER ARR["<<i<<"]::";cin>>arr[i];
}cout<<"ENTER TARGET TO FIND pair sum IN  ARRAY::";cin>>target;

for (int i = 0; i < n; i++)
{
    
    for (int j = 0; j < n; j++)
{
   if (arr[i]+arr[j]==target)
   {
   ans.push_back(arr[i]);
   ans.push_back(arr[j]);
   }}
 
}
cout<<"pair whose sum -->> "<<ans[0]<<"+"<<ans[1]<<"="<<target;
return 0;
}