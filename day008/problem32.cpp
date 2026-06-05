/*Write a program to Print repeated-number
pattern.
1
22
333
4444
55555*/
#include<iostream>
using namespace std;
int main()
{
int rows,num=1;
cout<<"enter  number of row ::";cin>>rows;

for (int i = 1; i <= rows; i++)
{
    
for ( int k =1; k<=i; k++)
{
     cout<<num;
}

   cout<<endl;
   num++;
}
return 0;
}