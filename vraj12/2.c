#include<stdio.h>

void main()
{
	int i,n,m,j,max=0;
	printf("enter your number n:");
	scanf("%d",&n);
	
	printf("enter your number m:");
	scanf("%d",&m);
	
	int a[n][m];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
		
			printf("enter  number of a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("your largest number is: ");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}	
	}
	printf("%d ",max);
}
