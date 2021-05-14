#include <stdio.h>
int a[10000];
void swap(int i,int j){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int main()
{
	int N,M;
	while(scanf("%d %d",&N,&M)==2){
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}

		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
				if(a[i]%M > a[j]%M) swap(i,j);
				if(a[i]%M == a[j]%M){
					if(a[i]%2==0 && a[j]%2!=0) swap(i,j);
					if(a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j]) swap(i,j);
					if(a[i]%2==0 && a[j]%2==0 && a[i]>a[j]) swap(i,j);
				}
			}
		}

		printf("%d %d\n",N,M);
		for(int i=0;i<N;i++){
			printf("%d\n",a[i]);
		}
	}
}
