#include<stdio.h>
#include<conio.h>
void main() 
{
    int num, first, last, a;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    a = num;
  
    last = num % 10;
    
    while (num >= 10) 
	{
        
		num = num / 10;
    
	}
    first = num;

    int sum = first + last;

    printf(" sum %d is %d\n",a , sum);

    
}
