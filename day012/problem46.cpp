//  Write a program to Write function for Armstrong.
#include<iostream>
using namespace std;
int pow(int num,int count);
void armstrong(int number);
int main()
{
 
 int number;

    cout<<"enter number to check number is armstrong number or not ::";
cin>>number;
armstrong(number);
return 0;
}
void armstrong(int number)
{
    int DGT=0,temp=0,finNum=0,count=0,Psum=0;
temp=number;

while (temp>0)
{count++;
    temp=temp/10;
}
temp=number;
while(temp>0)
{
DGT=temp%10;
Psum=Psum+pow(DGT,count);

temp=temp/10;
}
if(Psum==number){
    cout<<number<<"  is a armsrong number ";

}
else{
    cout<<number<<"is not a armstrong number";

}
return;
}
int pow(int num,int count){
    int i,a;
    a=num;
    for ( i = 0; i < count-1; i++)
    {
        num=num*a;
    }
    return num;


}