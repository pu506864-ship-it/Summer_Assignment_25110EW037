#include<stdio.h>
int main()
{
int i,n;
printf("enter number to print table::");
scanf("%d",&n);
for ( i = 0; i <=10; i++)
{
    printf("%dX%d=%d\n",n,i,n*i);
}

return 0;
}