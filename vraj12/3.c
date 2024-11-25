#include<stdio.h>
void main()
{
	int r,i,j,sum=0;
	printf("enter row and colum : ");
	scanf("%d",&r);
	
	
	
	int a[r][r];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<r; j++)
		{
			printf("enter 2d array a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			printf("\n");
		}
		
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<r; j++)
		{
			printf("%d",a[j][i]);
			
			
		}
		printf("\n");
	}
	printf("\n");
	
	

}
	
