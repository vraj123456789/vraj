#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	for(a=5; a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);	
		}
		printf("\n");
	}
}