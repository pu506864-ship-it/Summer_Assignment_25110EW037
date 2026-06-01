#include<iostream>
using namespace std;
int main()
{
int NumA,NumB,i,GCD,sz;
cout<<"enter 1st number::";
cin>>NumA;
cout<<"enter 2nd number::";
cin>>NumB;
if (NumA>=NumB){
    sz=NumA;
}
else{
    sz=NumB;
}
for ( i=1;i<=sz;i++)

{
    if ((NumA%i==0)&&(NumB%i==0))
    {
    GCD=i;
    }
    
}
cout<<"\ngreteast common divisor is::"<<GCD<<endl;
return 0;
}
