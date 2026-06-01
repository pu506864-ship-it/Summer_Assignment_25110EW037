
// Write a program to Print factors of a number. 

#include<iostream>
using namespace std;
int main()
{int number,i;
    cout<<"enter a number to find there factors ::";
    cin>>number;
    for ( i = 1; i < number; i++)
    {
     if(number%i==0){
        cout<<i<<" ";

     }
    }
    cout<<"are the factors of "<<number;
    
return 0;
}