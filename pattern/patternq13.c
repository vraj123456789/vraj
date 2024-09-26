#include<stdio.h>
#include<conio.h>

main()
{
	char a,b,c='A';
	
	for(a='A';b<='E';a++)
	{
		for(b='A';b<=a;b++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
}