// Write a program to Write function to find factorial.
#include<iostream>
using namespace std;
void fact(int n);
int main()
{
int num;
cout<<"enter a number to find there factorial::";cin>>num;
 fact(num);
return 0;
}
void fact(int n){
    int fact=1;
  for(int i = 1; i <=n; i++)
{fact=fact*i;
  }
cout<<fact;
}