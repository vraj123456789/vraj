#include<stdio.h>
void main()
{
	int i,j;
	
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
	
}