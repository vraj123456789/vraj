#include<stdio.h>

void main()
{
	int a[15] = {3,56,3,67,2,78,1,6,2,7,3,8};
	
	int i,sum=0;
	for(i=0; i<=11; i++)
	{
		printf("%d ",a[i]);
		sum=a[i]+sum;
	}
	printf("%d ",sum);
	
	
}
