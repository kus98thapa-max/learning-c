#include<stdio.h>
int main()
{
	float p,t,r,si;
printf("\nEnter principal amount:");
scanf("%f",&p);
printf("\nEnter time in year:");
scanf ("%f",&t);
printf("\nEnter rate of intrest:");
scanf("%f",&r);
si=(p*t*r)/100;
printf("simple intrest=%.2f",si); //upto two digits

}


