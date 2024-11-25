#include<stdio.h>
void main()
{
	int r,c,i,j,sum=0,row,colum;
	printf("enter r : ");
	scanf("%d",&r);
	
	printf("enter c : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter 2d array a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
			printf("\n");
		}
		
	}
	
	printf("enter a row number:");
	scanf("%d",&row);
	
	printf("element of rows %d : ",row);
		
		
		
			for(j=0; j<c; j++)
			{
				printf(" %d",a[row][j]);
			}
		
			
		
	
}
	
