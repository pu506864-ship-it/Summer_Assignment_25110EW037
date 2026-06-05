/*Write a program to Print hollow square
pattern.
*****
*   *
*   *
*   *
***** */
#include<iostream>
using namespace std;
int main()
{
int rows;
cout<<"enter  number of row ::";cin>>rows;

for (int i = 1; i <= rows; i++)
{ 
    if((i==1)||(i==rows))
    {
    for (int j = 1; j <=rows; j++)
    {
        cout<<"*";
    }
    }
    else
    {
        cout<<"*";
     for ( int k =1; k<=rows-2; k++)
      {
     cout<<" ";
      }cout<<"*";
    }
   cout<<endl;
}
return 0;
}