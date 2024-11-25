#include<stdio.h>
void main()
{
	int i,n,a[n];
	printf("enter your number :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		
		printf("enter  number of a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	printf("your nagetive number: ");
	
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}	
	}
}
