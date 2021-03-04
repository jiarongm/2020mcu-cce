#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>=90)printf("A\n");
	else if(x>=80)printf("B\n");
	else if(x>=60)printf("C\n");
	else printf("F\n");
}