// WRITE A PROGRAM TO REMOVE DUPLICATES FROM ARRAY.
#include<iostream>
#include<vector>

using namespace std;

int main()
{
int arr[10],n,c=0;


cout<<"ENTER SIZE OF ARRAY::";cin>>n;
vector<int> ans;
for (int i = 0; i < n; i++)
{
   cout<<"ENTER ARR["<<i<<"]::";cin>>arr[i];
}
 ans.push_back(arr[0]);
for (int  i = 1; i < n; i++)
{
   for (int j = i-1; j >=0; j--)
   {
      if (arr[i]==arr[j])
      {
         c++;
      }
      
   }
   if (c==0)
   {
      ans.push_back(arr[i]);
   }
   c=0;
   
}cout<<"the final array after removing duplicates from it is [";
for (int i = 0; i < ans.size(); i++)
{
   cout<<ans[i]<<",";
}cout<<"]";


return 0;
}