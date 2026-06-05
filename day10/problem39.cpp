/*Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321*/
#include<iostream>
using namespace std;
int main()
{
int rows,num;
cout<<"enter  number of row ::";cin>>rows;

for (int i = 1; i <= rows; i++)
{ num=1;
    for (int j = rows-i; j >0; j--)
    {
        cout<<" ";
    }
for ( int k =1; k<=2*i-1; k++)
{
     cout<<num;
     num++;
     if(k==i){
        break;
     }
}
for (int k = 1; k< i; k++)
{
    cout<<k;
}


   cout<<endl;
}

return 0;
}