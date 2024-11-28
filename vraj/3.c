#include<stdio.h>

void main()
{
	int n,i,max=1,b;
	printf("enter n:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("array size is a[%d]",i);
		scanf("%d",&i);
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	printf("maximum number is %d",max);
}
