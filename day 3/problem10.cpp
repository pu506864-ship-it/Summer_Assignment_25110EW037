#include<iostream>
using namespace std;
int main()
{
int n,j=1,count=0;
cout<<"enter a number to print prime numbers upto it :: ";
cin>>n;
for (int i = 1; i <=n; i++)
{
while (j<=i)
{
    if(i%j==0){
        count++;
        
    }
    j++;}
if (count==2)
{
    cout<<i<<" ";
}
j=1;
count=0;

}

return 0;
}