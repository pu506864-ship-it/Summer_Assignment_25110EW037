#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter number::");
    scanf("%d",&n);
   for (i=0;i<=n; i++)
   { 
    sum+=i;
    
   }
   printf("sum upto 1+2...+%d =%d",n,sum);
   
return 0;
}