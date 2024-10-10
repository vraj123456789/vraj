#include<stdio.h>

void main()
{
	int a[20] = {1,5,3,6,7,3,8,3,6,2,7,2,7,2,8,2,84,23,6,2};
	int i,average=0,sum;

	for(i=0; i<=15; i++)
	{
		printf("%d \n",a[i]);
		sum=(a[i]+sum);
	}
	average=(sum)/15;
	printf("average %d ",average);
	
	
}
