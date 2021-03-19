#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d=50*%d+5*%d+1*%d\n",x,x/50,x%50/5,x%5);
}