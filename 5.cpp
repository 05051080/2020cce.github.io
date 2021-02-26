#include<stdio.h>
int main(void)
{
	int a,b,n=0;
	
	scanf("%d %d",&a,&b);
	
	if(a>b)
		n=a%b;
	else
		n=b%a;
	printf("%d %d",a/n,b/n);

	return 0;
}
