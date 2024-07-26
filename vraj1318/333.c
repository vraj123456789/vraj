#include<stdio.h>
#include<conio.h>
#include<conio.h>
void main ()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);//12
	
	printf("enter b:");
	scanf("%d",&b);//6
	
	a=a*b;
	b=a/b;
	a=a/b;
	printf("ans a=%d\n",a);
	printf("ans b=%d",b);
}
