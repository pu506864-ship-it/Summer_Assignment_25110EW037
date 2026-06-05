/*Write a program to Print reverse number
triangle.
12345
1234
123
12
1*/
#include<iostream>
using namespace std;
int main()
{
int rows,num;
cout<<"enter  number of row ::";cin>>rows;

for (int i = 0; i <= rows; i++)
{num=1;
    for (int j = rows-i; j >0; j--)
    {
        cout<<num;
        num++;
    }

   cout<<endl;
}
return 0;
}