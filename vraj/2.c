#include<stdio.h>

int a(int n)
{
	int i=1,sum=0;
	for(i=1; i<=n; i++)
	{
		
		sum=i+sum;	
	}
	
	return sum;
	
}
void main()
{
	int n;
	
	printf("enter n:");
	scanf("%d",&n);	
	int a[n];
	
	int sum = a[n];
	
	printf("n number sum is:%d",sum);
}
