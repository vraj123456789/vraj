#include<stdio.h>

int a(int n)
{
	int i=1;
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
	return i;
	
}
void main()
{
	int n,a[n];
	printf("enter n:");
	scanf("%d",&n);
	
	int i= a(n);
	
	printf("even number is %d",i);
}
