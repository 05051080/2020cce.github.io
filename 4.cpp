#include<stdio.h>
int main(void)
{
	int n;
	
	scanf("%d",&n);
	
	if(n>=90)
	{
		printf("A\n");
	}
	else if(90<n&&n<=80)
	{
		printf("B\n");
	}
	else if(80<n&&n<=60)
	{
		printf("C\n");
	}
	else 
	{
		printf("F\n");			
	}
	return 0;
}
