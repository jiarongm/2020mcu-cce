#include <stdio.h>
int main()
{
	int y=0;
	for(int i=1;i<=10;i++){
		int x;
		scanf("%d",&x);
		if(x%3==0)y++;
	
	}
	printf("%d\n",y);
}