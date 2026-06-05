// Write a program to Recursive reverse number. 
#include<iostream>
using namespace std;
int RevNum(int n,int ans);
int main()
{int Num,ans=0;
    cout<<"enter a number to reverse it";cin>>Num;

 cout<<RevNum(Num,ans);
return 0;
}
int RevNum(int n,int ans){
    int digit;
if(n==0) {
    return ans;
}
    digit=n%10;
    ans=ans*10+digit;
    
    n=n/10;
    RevNum(n,ans);

 

}