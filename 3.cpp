#include<stdio.h>
int main(void)
{
	int a,b,c,d,e,f,g,h,i,j,n=0;
	
	scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	if(a%3==0)
		n++;
	if(b%3==0)
		n++;
	if(c%3==0)
		n++;
	if(d%3==0)
		n++;
	if(e%3==0)
		n++;
	if(f%3==0)
		n++;
	if(g%3==0)
		n++;
	if(h%3==0)
		n++;
	if(i%3==0)
		n++;
	if(j%3==0)
		n++;
																			
	printf("%d\n",n);

	return 0;
}
