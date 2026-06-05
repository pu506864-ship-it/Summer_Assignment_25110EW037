/*Write a program to Print reverse star pattern.
*****
****
***
**
*      */
#include<iostream>
using namespace std;
int main()
{
int rows;
cout<<"enter  number of row ::";cin>>rows;

for (int i = 0; i <= rows; i++)
{
    for (int j = rows-i; j >0; j--)
    {
        cout<<"*";
    }

   cout<<endl;
}
return 0;
}