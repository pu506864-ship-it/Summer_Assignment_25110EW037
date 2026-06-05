/*Write a program to Print repeated character
pattern.
A
BB
CCC
DDDD
EEEEE*/
#include<iostream>
using namespace std;
int main()
{
int rows;
char C='A';
cout<<"enter  number of row ::";cin>>rows;

for (int i = 1; i <= rows; i++)
{
    
for ( int k =1; k<=i; k++)
{
     cout<<C;
}

   cout<<endl;
   C++;
}
return 0;
}