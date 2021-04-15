#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare(const void* p1,const void* p2){
	return strcmp((char*)p1,(char*)p2);
}
int main(){
	int n;
	scanf("%d\n\n",&n);//information number

	for(int t=0;t<n;t++){
		int N=0;
		for(int i=0; ;i++){
			gets(tree[i]);
			if(strcmp(tree[i],"")==0){
				N=i;
				break;
			}
		}
		qsort(tree,N,sizeof(tree[32]),compare);


		float x=1.0;
		for(int i=0;i<N;i++){
			if(strcmp(tree[i],tree[i+1])==0){
				x++;

			}
			else {
				printf("%s %.4f\n",tree[i],x/N*100);
				x=1;
			}memset(tree[i],'\0',32);
		}
		if(t!=n-1)printf("\n");
	}

}
