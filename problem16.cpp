#include<iostream>
using namespace std;
int pow(int num,int count);
int main()
{
int number,i;
cout<<"enter number to checkm number is armstrong number or not ::";
cin>>number;

for(i=1;i<=number;i++){
    int DGT=0,temp=0,finNum=0,count=0,Psum=0;
    temp=i;
finNum=i;

while (temp>0)
{count++;
    temp=temp/10;
}
temp=i;


while(temp>0)
{
DGT=temp%10;
Psum=Psum+pow(DGT,count);

temp=temp/10;
}

if(Psum==finNum)
{
    cout<<finNum<<" ";

}
}

return 0;
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