#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=a;b>=1;b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}