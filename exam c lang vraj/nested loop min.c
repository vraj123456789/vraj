#include<stdio.h>

void main()
{
	int a,b,c,d;
	
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b:");
	scanf("%d",&b);
	
	printf("enter c:");
	scanf("%d",&c);
	
	printf("enter d:");
	scanf("%d",&d);
	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				printf("a is min");
			}
			else
			{
				printf("d is min");
			}
		}
		else
		{
			if(c<d)
			{
				printf("c is min");
			}
			else
			{
				printf("d is min");	
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				printf("b is min");
			}
			else
			{
				printf("d is min");
			}
		}
		else
		{
			if(c<d)
			{
				printf("c is min");
			}
			else
			{
				printf("d is min");
			}
		}	
	}
	
}
