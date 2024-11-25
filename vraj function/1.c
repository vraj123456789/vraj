#include<stdio.h>

int a(int num1, int num2)
{
	return(num1+num2);
}

int s(int num1, int num2)
{
	return(num1-num2);
}

int m(int num1, int num2)
{
	return(num1*num2);
}

int d(int num1, int num2)
{
	return(num1/num2);
}

int z(int num1, int num2)
{
	return(num1%num2);
}



void main()
{
	int num1,num2;
	int choic;
	
	
	printf("enter a num1 : ");
	scanf("%d",&num1);
	
	printf("enter a num2 : ");
	scanf("%d",&num2);
	
	
	printf("enter a choic 0 to 5 number:");
	scanf("%d",&choic);
	
	switch(choic)
	{
		case 1:
			printf("%d",a(num1,num2));
		break;
		
		case 2:
			printf("%d",s(num1,num2));
		break;
		
		case 3:
			printf("%d",m(num1,num2));
		break;
		
		case 4:
			printf("%d",d(num1,num2));
		break;
		
		case 5:
			printf("%d",d(num1,num2));
		break;
		
		case 0:
		break;
			
		
	}
}
