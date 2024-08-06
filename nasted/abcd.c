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
	
	//a,b,c,d
	if(a>b)
	{
		//a,c,d,
		if(a>c)
		{
			//a,d,
			if(a>d)
			{
			     //a 
				 printf("a is max");	
			}
			else
			{
				//d
				printf("d is max");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
	}
	else
	{
		//b,c,d,
		if(b>c)
		{
			if(b>d)
			{
				//b
				printf("b is max");
			}
			else
			{
				//d
				printf("d is max");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is max");
			}
			else
			{
				//d 
				printf("d is max");
			}
		}
	}
}
