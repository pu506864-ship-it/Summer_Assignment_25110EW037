// Write a program to Count set bits in a number.
#include<iostream>
using namespace std;
int CountBits(int n);

int main()
{
int Num;
    cout<<"enter number to check there bits::";cin>>Num;
cout<<"total number of bits in ["<<Num<<"] is ::"<<CountBits(Num);
return 0;
}

int CountBits(int n){
    int answer[15],count,i=0,bits=0;
    while(n>0)
{
    answer[i]=n%2;
    n=n/2;
    i++;
}
count=i;
for (i = 0; i < count; i++)
{
    if(answer[i]==1){
        bits++;
    }
}
return bits;

}