#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	char grade;
	
	printf("Enter your marks:");
	scanf("%d",&marks);
	
	
	(marks>=90 && marks<=100)?
	
		printf("Your Grade is A\n",grade='A')	
	:	
		(marks>=80 && marks<90)?		
		printf("Your Grade is B\n",grade='B')	
	:	
		(marks>=70 && marks<80)?			
		printf("Your Grade is C\n",grade='C')		
	:			
		(marks>=60 && marks<70)?				
		printf("Your Grade is D\n",grade='D')				
	:				
		(marks>=33 && marks<60)?					
		printf("Your Grade is E\n",grade='E')			
	:					
		(marks>=0 && marks<33)?						
		printf("Your Grade is F\n",grade='F')					
	:					
	printf("Enter valid numer!");
						
					
	switch(grade)
	{
		case 'A':printf("Excellent Work\n");
		break;
		case 'B':printf("Well Done\n");
		break;
		case 'C':printf("Good Job\n");
		break;
		case 'D':printf("You passes, but you could do better\n");
		break;
		case 'E':printf("Close to fail, but Passed\n");
		break;
		case 'F':printf("Sorry, You are Failed\n");
		break;
	}					
			
		if(grade=='A' || grade=='B'|| grade=='C' ||grade=='D' || grade=='E' )
		{
			printf("You are eligible for the next level!");
		}
		else
		{
			printf("Please Try Again next time !");
		}
		
			
}
