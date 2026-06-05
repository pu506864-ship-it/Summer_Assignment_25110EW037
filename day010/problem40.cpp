/*Write a program to Print character pyramid. 
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA*/
#include<iostream>
using namespace std;
int main()
{
int rows;
char C;
cout<<"enter  number of row ::";cin>>rows;

for (int i = 1; i <= rows; i++)
{ C='A';
    for (int j = rows-i; j >0; j--)
    {
        cout<<" ";
    }
for ( int k =1; k<=2*i-1; k++)
{
     cout<<C;
     C++;
     if(k==i){
        break;
     }
}
C='A';
for (int k = 1; k< i; k++)
{
    cout<<C;
    C++;
}


   cout<<endl;
}

return 0;
}