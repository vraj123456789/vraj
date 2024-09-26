#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=a;b<=5;b++)
		{
			if(b%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		
		}
		printf("\n");
	}
}