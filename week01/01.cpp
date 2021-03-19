#include <stdio.h>
int main()
{
	int x,y,c;
	scanf("%d%d",&x,&y);
	for(int i=2;i<=x;i++){
		if(x%i==0&&y%i==0){
			c=i;
		}
	
	}
	printf("%d %d\n",x/c,y/c);
}
