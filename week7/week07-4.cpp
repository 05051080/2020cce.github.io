#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char other[10];

int compare(const void *p1, const void *p2)
{
    char *s1=(char*)p1;
    char *s2=(char*)p2;
    return strcmp(s1,s2);
}
int main()
{
    int n,a=1,ans[10]={0},j=0,pos[10]={0};
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%s", line[i]);
        gets(other);
    }
    qsort(line , n, 10, compare);
	printf("%s ",line[0]);
    for(int i=1;i<n;i++){
    	if(strcmp(line[i],line[i-1])==0){
    		a++;
        }
        else{
        	printf("%d\n",a);
        	a=1;
        	printf("%s ",line[i]);
        }
    }
    printf("%d\n",a);
}
