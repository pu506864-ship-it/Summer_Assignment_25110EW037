// Write a program to Write function to find maximum.
#include<iostream>
using namespace std;
int max(int a,int b,int c);
int main()
{
int a,b,c;
cout<<"enter three number to find maximum of them::";cin>>a>>b>>c;
cout<<"the  largest number is::"<<max(a,b,c);

return 0;
}
int max(int a,int b,int c){
    if ((a>b)&&(a>c))
    {
    return a;
    }
    else if (b>c&&b>a)
    {
        return b;
    }
    else{
        return c;
    }

    
    
}