# 2020cce.github.io

2021.02.26程設練習

# 練習一
```c
#include<stdio.h>
int main(void)
{
	int n;
	
	scanf("%d",&n);

	printf("%d=50*%d+5*%d+1*%d",n,n/50,n%50/5,n%5);

	return 0;
}
```

# 練習二
```c
#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	if(n>=90)
		printf("A\n");
	else if(n>=80)
		printf("B\n");
	else if(n>=60)
		printf("C\n");
	else 
		printf("F\n");
	return 0;
}
```

# 練習三
```c
#include<stdio.h>
int main(void)
{
	int i,n,a=0;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&n);
		if(n%3==0)
			a++;
	}
																			
	printf("%d\n",a);

	return 0;
}
```

# 練習四
```c
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
```

# 練習五
```c
#include<stdio.h>
int main()
{
	int a,b,i,ans=1;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	{
		if(a%i==0 && b%i==0)
			ans=i;
	}
	printf("%d %d\n",a/ans,b/ans);
	return 0;
}
```
