// Write a program to Check perfect number.

#include<iostream>
using namespace std;
int main()
{
int number,i ,sum=0;
cout<<"enter a number to check number is perfect or not::";
cin>>number;
for ( i=1; i<number; i++)
{
    if (number%i==0){

        sum+=i;
    }
}
if(sum==number){
    cout<<number<<" is a perfect number";

}
else{
    cout<<number <<"is not a perfec number";
}
return 0;
}