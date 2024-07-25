#include<stdio.h>
#include<conio.h>

void main()
{
	int salary,hra,da,ta,total;
	printf("enter salary:");
	scanf("%d",&salary);
	printf("enter hra:");
	scanf("%d",&hra);
	printf("enter da:");
	scanf("%d",&da);
	printf("enter ta:");
	scanf("%d",&ta);
	hra=(salary*10)/100;
	da=(salary*8)/100;
	ta=(salary*5)/100;
	total=(hra+da+ta)+salary;
	printf("ans=%d",total);
}