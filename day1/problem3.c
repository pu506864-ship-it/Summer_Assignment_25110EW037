#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter number to find its factorial::");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
    fact*=i;

}
printf("factorial of %d!=%d",n,fact);
return 0;
}