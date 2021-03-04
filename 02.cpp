#include <stdio.h>
int main()
{
	int a[1000]={},b=0;
	for(int i=1; ;i++){
		int x;
		scanf("%d",&x);
		if(x==0)break;
		a[i]=x;
		b++;
	}
	for(int i=b;i>0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}