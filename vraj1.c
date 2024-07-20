#include<stdio.h>
#include<conio.h>

int main ()
{
	float b,r,n,vraj;
	printf("enter the principal amount=");
	scanf("%f",&b);
	printf("enter the rate=");
	scanf("%f",&r);
	printf("enter the month=");
	scanf("%f",&n);
	vraj=(b*r*n)/100;
	printf("find the simple interest=%.2f",vraj);
}
