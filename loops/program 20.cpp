#include<stdio.h>
int main()
{
int i,x,y,z=1;
printf("\nEnter thr values for x and y:");
scanf("%d%d",&x,&y);
for(i=1;i<=x;i++)
z=z*y;
printf("\n%d raise to power %d=%d",y,x,z);

}

