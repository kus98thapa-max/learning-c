#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter any four numbers:");
scanf("%d%d%d%",&a,&b,&c);
if(a>b&&a>c)
printf("\n%d is the largest number.",a);
else if(b>c) 
printf("\n%d is the largest number.",b);
else
printf("\n%d is the largest number.",c);

}
