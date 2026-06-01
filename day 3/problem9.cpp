#include<iostream>
using namespace std;
int main()
{
int num,count=0,i=1;
cout<<"enter a number too check it is prim or not :: ";
cin>>num;
while (i<=num)
{
   if (num%i==0)
   {
   count++;

   }

   i++;
}
if(count==2){
cout<<"number "<<num<<" is a prime number "<<endl;
}
else{
    cout<<"number "<<num<<" is not prime "<<endl;
}
return 0;
}