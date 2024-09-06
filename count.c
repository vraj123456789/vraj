#include<stdio.h>

main()
{
	int n,count;
	printf("enter n :");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		count++;	
	}
	printf("count=%d ",count);
}
