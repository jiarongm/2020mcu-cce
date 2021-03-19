#include <stdio.h>
int main()
{
	int x,y=0;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		if(x%i==0)y++;
	
	}
	printf("%d\n",y);
}