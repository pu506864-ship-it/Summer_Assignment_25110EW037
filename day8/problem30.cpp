/*Write a program to Print number triangle.
1
12
123
1234
12345*/
#include<iostream>
using namespace std;
int main()
{
int rows;
cout<<"enter  number of row ::";cin>>rows;

for (int i = 1; i <= rows; i++)
{
    
for ( int k =1; k<=i; k++)
{
     cout<<k;
}

   cout<<endl;
}
return 0;
}