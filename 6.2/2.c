#include<stdio.h>

void main()
{
	int num ;
	printf("enter the num :");
	scanf("%d",&num);
	
	if(num>=0)
	{
		printf("your number is positive");
		
	}
	else if(num==0)
	{
		printf("your number is neutral");
	}
	else
	{
		printf("your number is nagetive");
	}
}
