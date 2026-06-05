// Write a program to Print half pyramid pattern. 
#include<iostream>
using namespace std;
int main()
{
int rows;
cout<<"enter  number of row ::";cin>>rows;

for (int i = 1; i <= rows; i++)
{
    for (int j = rows-i; j >0; j--)
    {
        cout<<" ";
    }
for ( int k =1; k<=2*i-1; k++)
{
     cout<<"^";
}

   cout<<endl;
}

return 0;
}