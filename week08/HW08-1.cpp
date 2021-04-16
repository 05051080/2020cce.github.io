#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[100000][32];
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	int N=0;
	for(int i=0; ;i++){
		char now=gets(tree[i]);
		if(now==NULL){//Åª¤J¥¢±Ñ
			N=i;
			break;
		}
		if(strcmp(tree[i],"")==0){
			N=i;
			break;
		}
	}
	for(int i=0;i<N;i++){
		printf("%s\n",tree[i]);
	}
	qsort(tree,N,32,compare);
	printf("%s "tree[0]);
	int a=1;
	for(int i=0;i<N-1;i++){
		if(strcmp(tree[i],tree[i+1]!=0)){
			printf("%d\n",a);
			printf("%s ",tree[i+1]);
			a=1;
		}
		else{
			a++;
		}
	}
	printf("%d\n",a);

}
