#include<stdio.h>
void main()
{
	int i,j,x=11;
	
	for(i=11; i<=14; i++)
	{
		for(j=11; j<=i; j++)
		{
			printf("%d ",x);
			x++;
		}
		
		printf("\n");
	}

}