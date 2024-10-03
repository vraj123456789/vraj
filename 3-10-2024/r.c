#include<stdio.h>
void main()
{
	int i,j;
	
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
	
}
