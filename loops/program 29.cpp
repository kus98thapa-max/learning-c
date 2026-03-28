#include<stdio.h>
int main()
{
int n,i;
printf("\nEnter a number:");
scanf("%d",&n);
for(i=2;i<=n;i++)	
{
if(n%i==0)
break;
}
if(i==n)
printf("\nThe given number is prime.");
else
printf("\nThe given number its composite.");
}