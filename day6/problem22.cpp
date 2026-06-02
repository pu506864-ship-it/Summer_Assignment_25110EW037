// Write a program to Convert binary to decima
#include<iostream>
#include<math.h>
using namespace std;
void BinToDec(int Num);
int main()
{
    int BinNum;
    cout<<"enter number::";cin>>BinNum;

BinToDec(BinNum);

return 0;
}
void BinToDec(int Num){
    int binary[15],answer=0,j=1,dgt=0,count=0;
    while (Num>0)
    { dgt=Num%10;
        binary[count]=dgt;
        count++;
        Num=Num/10;
    }
    for (int i = 0;i<count; i++)
    {
        answer=answer+binary[i]*j;
        j=j*2;
    }
    
cout<<answer;


}