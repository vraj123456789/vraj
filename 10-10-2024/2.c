#include<stdio.h>

void main()
{
	int a[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
	int i;
	for(i=0; i<=16; i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
		else
		{
			printf("");
		}
	}
	
	
}
