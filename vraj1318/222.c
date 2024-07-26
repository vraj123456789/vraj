#include<stdio.h>
#include<conio.h>

void main ()
{
	int a,b,c;
	printf("enter a:");
	scanf("%d",&a);//1
	
	printf("enter b:");
	scanf("%d",&b);//2
	c=a;
    a=b;//a=2
    b=c;
   
    
	printf("ans a=%d\n",a);
	printf("ans b=%d",b);
}
