#include<stdio.h>

void main()
{
	int n,age;
	printf("enter n:");
	scanf("%d",&n);
	
	if(n>=18 && n<121)
	{
		printf("you are eligible for vote");
	}
	else
	{
		printf("you are not eligible for vote");
	}
}