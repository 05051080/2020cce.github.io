#include <stdio.h>
char line[2000];
int main()
{
    for(int t=0;gets(line);t++){
        int a[256]={};

        for(int i=0;line[i]!=0;i++){
            char c=line[i];
            a[c]++;
        }
        if(t>0) printf("\n");
        for(int i=0;i<256;i++){
            if(a[i]>0) printf("%d %d\n",i,a[i]);
        }
    }
}
