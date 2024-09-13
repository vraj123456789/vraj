#include<stdio.h>
pi=3.14;
void main()
{
	int r,sum;
	printf("enter r:");
	scanf("%d",&r);
	
	sum=((pi*r*r*r)*3)/4;
	printf("your ans is %d",sum);
}