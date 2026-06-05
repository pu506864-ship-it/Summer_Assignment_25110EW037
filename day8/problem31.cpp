/*Write a program to Print character triangle
A
AB
ABC
ABCD
ABCDE*/
#include<iostream>
using namespace std;
int main()
{
int rows;
char c;
cout<<"enter  number of row ::";cin>>rows;

for (char i = 1; i <=rows; i++)
{ c='A';
    
for ( int k =1; k<=i; k++)
{
     cout<<c;
     c++;
}

   cout<<endl;
}
return 0;
}