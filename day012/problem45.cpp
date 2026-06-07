// Write a program to Write function for palindrome.
 #include<iostream>
 using namespace std;
 void plindrome(int num);
 int main()
 {int num;
 cout<<"enter a number:: "<<endl;
cin>>num;
plindrome(num);
 return 0;
 }
 
 void plindrome(int num)
{
int num2,digits=0,reverse=0;

num2=num;
while (num>0)
{
    digits=num%10;
    reverse=reverse*10+digits;
    num=num/10;

}
if (num2==reverse)
{
cout<<"number\t["<<num2<<"]  is a palindrome number"<<endl;
}
else{
    cout<<"number\t[" <<num2<< "] is not palindromme number "<<endl;

}
return ;
}