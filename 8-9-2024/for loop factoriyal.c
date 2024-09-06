#include<stdio.h>

 main()
{
	int n,i,ans=1;
	//1
	//n
	//--
	printf("enter n :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		ans=ans*i;
	} 
	printf("%d\n",ans);
}
