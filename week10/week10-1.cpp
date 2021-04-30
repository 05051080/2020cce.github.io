#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];//陣列tree
int compare(const void *p1,const void *p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int t;
	scanf("%d\n\n",&t);
	for(int i=0;i<t;i++){
		int n=0;
		while( gets(line)!=NULL){//讀失敗變NULL
			if(strcmp(line,"")==0) break;//空行離開
			strcpy(tree[n], line);//把樹的名字放到tree
			n++;//統計樹的數目
		}
		//printf("有幾棵樹? %d\n",n);
		//照樹名來排序 => 陣列在哪
		qsort(tree,n,32,compare);

		if(i>0){
			printf("\n");
		}
		int a=1;
		printf("%s ",tree[0]);
		for(int i=0;i<n-1;i++){
			if(strcmp(tree[i],tree[i+1]) == 0){
				a++;
			}
			else{
				printf("%.4f\n",100*a/(float)n);
				a=1;
				printf("%s ",tree[i+1]);
			}
		}
		printf("%.4f\n",100*a/(float)n);
	}
}
