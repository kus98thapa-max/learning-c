#include<stdio.h>
int main()
{
int i,a=0,b=1,c=1,n;
printf("\nEnter the number of terms to be displayed:");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
	printf("%d\t",c);
	c=a+b;
	a=b;
	b=c;
	}	
	
}