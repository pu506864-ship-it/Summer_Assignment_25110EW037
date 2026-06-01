// Write a program to Find largest prime factor. 

#include<iostream>
using namespace std;
int isprime(int n);

int main()
{int number,i,max=0;
    cout<<"enter a number to check there largest prime factor::";
    cin>>number;

    for ( i=1;i<number; i++)
    {
        if((number%i==0)&&(isprime(i)))
        {
            max=i;
        }
    }
    cout<<max<<" is a largest prime factor of "<<number;

return 0;
}
int isprime(int n){
int i=1,count=0;
if(n<2){
        return 0;}
    while(i<=n){
        if (n%i==0)
        {
          count++;    
    }  
        i++;
    }
    
    
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }

}