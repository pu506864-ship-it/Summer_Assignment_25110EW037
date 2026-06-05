// Write a program to Recursive sum of digits. 
#include<iostream>
using namespace std;
int SUM(int n);
int main()
{ int Num;
    cout<<"ENTER A NUMBER TO PRINT SUM  UPTO IT ::";cin>>Num;
    
         cout<<SUM(Num)<<" ";
    
return 0;
}
int SUM(int n){
    if(n==0){
        return 0 ;
    }
    
    
else{
    return n+SUM(n-1);
}
}