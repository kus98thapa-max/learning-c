#include <stdio.h>
int main()
{
	int i, sum=0;
	int num[5]={5,10,15,20,25};
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
		sum=sum+num[i];
	
	}
	printf("\nSum of 5 number is:%d",sum);
}