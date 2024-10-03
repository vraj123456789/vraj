#include<stdio.h>
void main()
{
	int i,j;
	
	for(i=1; i<=6; i++)
	{
		for(j=1; j<=9; j++)
		{
			if(i==1 && j==1)
			{
				printf("* ");
			}
			
			else if(i==2 && j==2) 
			{
				printf("* ");
			}
			
			else if(i==3 && j==3) 
			{
				printf("* ");
			}
			
			else if(i==4 && j==4) 
			{
				printf("* ");
			}
			
			else if(i==5 && j==5) 
			{
				printf("* ");
			}
			
			else if(i==4 && j==6) 
			{
				printf("* ");
			}
			
			else if(i==4 && j==6) 
			{
				printf("* ");
			}
			
			else if(i==3 && j==7) 
			{
				printf("* ");
			}
			
			else if(i==2 && j==8) 
			{
				printf("* ");
			}
			
			else if(i==1 && j==9) 
			{
				printf("* ");
			}
			
		
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}


	for(i=1; i<=6; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1)
			{
				printf("* ");
			}
			else if(i==1 && (j==2|| j==3||j==4))
			{
				printf("* ");
			}
			
			else if(i==2 && j==4)
			{
				printf("* ");
			}
			
			else if(i==3 && (j==2|| j==3||j==4))
			{
				printf("* ");
			}
			
			else if(i==4 && j==2)
			{
				printf("* ");
			}
			
			else if(i==5 && j==3)
			{
				printf("* ");
			}
			
			else if(i==6 && j==4)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1)
			{
				printf("* ");
			}
			
			
			else if(j==1)
			{
				printf("* ");
			}
			
			else if(j==5)
			{
				printf("* ");
			}
			
			else if(i==3 && (j==2|| j==3 || j==4))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");	
	}
	
	printf("\n");
	printf("\n");
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=7; j++)
		{
			if(i==1)
			{
				printf("* ");
			}
			
			else if(j==4 && (i==2 ||i==3|| i==4||i==5 || i==6 || i==7))
			{
				printf("* ");
			}
		
			else if(j==3 && i==7)
			{
				printf("* ");
			}
			
			else if(j==2 && i==7)
			{
				printf("* ");
			}
			
			else if(j==2 && i==6)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
