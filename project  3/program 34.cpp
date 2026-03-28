#include<stdio.h>
int main()
{
	int i,n,num[100],max;
	printf("\nEnter the size of array not more then 100:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=1;i<n;i++)
	{
		if(num[i]>max)
		max=num[i];
	}
	printf("\nLargest number in array is:%d",max);
}