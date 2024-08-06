#include<stdio.h>

void main()
{
	int a,b,c,d,e;
	
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);	
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	printf("enter e:");
	scanf("%d",&e);
	
	
	//a,b,c,d,e,
	if(a>b)
	{
		//a,c,d,e,
		if(a>c)
		{
			//a,d,e
			if(a>d)
			{
				//a,e
				if(a>e)
				{
					//a 
					printf("a is max");
				}
				else
				{
					//e
					printf("e is max");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					printf("d is max");	
				}
				else
				{
					printf("e is max");	
				}	
			}
		}
		else
		{
			//c ,d,e,
			if(c>d)
			{
				if(c>e)
				{
					printf("c is max");
					
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				//d,e
				if(d>e)	
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
			}	
		}	
	}
	else
	{
		//b,c,d,e,
		if(b>c)
		{
			//b,d,e,
			if(b>d)
			{
				//b,e
				if(b>e)
				{
					printf("b is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				//d,e,
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}	
			}
		}
		else
		{
			//c,d,e,
			if(c>d)
			{
				if(c>e)
				{
					printf("c is max");
				}
				else
				{
					printf("e is max");
				}
			}
			else
			{
				if(d>e)
				{
					printf("d is max");
				}
				else
				{
					printf("e is max");
				}
			}	
		}	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
