#include<stdio.h>


int a(int n)
{
	int i,factoriyal=1;

	
	for(i=1; i<=n; i++)
	{
		factoriyal=factoriyal*i;
		
	}
	return factoriyal;
}

void main()
{
	int n;
	printf("enter a positive number :");
	scanf("%d",&n);
	
	int factoriyal = a(n);
	
	printf("factoriyal value is %d",factoriyal);
	
}
