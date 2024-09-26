#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	for(b=1;b<=5;b++)
	{
		for(a=1;a<=b;a++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
}