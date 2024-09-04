#include<stdio.h>

main()
{
	int n,f=1;
	printf("enter n:");
	scanf("%d",&n);

	do
	{
     	f=f*n;
     	n--;
	}while(n>=1);
	
	printf("your factorial is%d",f);
}
