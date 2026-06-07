// Write a program to Write function for perfect number
#include<iostream>
using namespace std;
void perfect(int number);
int main()
{
    int number;
  cout<<"enter a number to check number is perfect or not::";
  cin>>number;
  perfect(number);

return 0;
}
void perfect(int number)
{
int i ,sum=0;

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
return ;
}