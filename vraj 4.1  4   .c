#include<stdio.h>;
#include<conio.h>;

void main()
{
	int a,b,c;
//	a=10
//	b=20
//	c=a
	printf("enter a:");  //10
	scanf("%d",&a);
	printf("enter b:");  //20
	scanf("%d",&b);
	c=a;  
	a=b;
	b=c;
	printf("ans a:%d",a);
	printf("ans b:%d",b);
	
}
