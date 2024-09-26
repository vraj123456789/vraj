#include<stdio.h>
#include<conio.h>

main()
{
	char a,b;
	
	for(a='A';b<='E';a++)
	{
		for(b='A';b<=a;b++)
		{
			printf("%c",b);
		}
		printf("\n");
	}
}