// Write a program to Convert decimal to binary
#include<iostream>
using namespace std;
void BinToDec(int n,int base);
int main()
{
int number ,base;
cout<<"enter number::";cin>>number;
cout<<"enter base::";cin>>base;
BinToDec(number,base);

return 0;
}
void BinToDec(int n,int base){
    int answer[15],i=0,j;
    while(n>0)
{
    answer[i]=n%2;
    n=n/2;
    i++;
}

for  (j=i-1 ;j>=0; j--)
{
cout<<answer[j];
}


}