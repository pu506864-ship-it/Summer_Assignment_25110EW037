// Write a program to Check strong number.

#include<iostream>
using namespace std;
int factorial(int n);

int main()
{
    int number,i ,sumFact=0,temp,DGT;
cout<<"enter a number to check number is perfect or not::";
cin>>number;
temp=number;
while(temp>0)
{
DGT=temp%10;
sumFact=sumFact+factorial(DGT);
temp=temp/10;
}
if (sumFact==number)
{
cout<<number<<" is a strong number;";
}
else{
    cout<<number<<" is not a strong number;";
    
}

return 0;
}
int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;

}