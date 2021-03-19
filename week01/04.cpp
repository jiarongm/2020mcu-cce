#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int ans=0;
	for(int i=1;i<x;i++){
		ans+=i*(i+1);
	
	}
	printf("%d\n",ans);
}