#include<stdio.h>
void main()
{
	int i,j;
	
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
