#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[2000][75];
int compare(const void *p1,const void *p2){
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
char other[100];
int main()
{
	int n,x=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
		gets(other);
	}
	qsort( a,n,sizeof(a[75]),compare);

	for(int i=0;i<n;i++){
		if( strcmp(a[i],a[i+1])!=0 ){
			printf("%s %d\n",a[i],x);
			x=1;
		}
		else {
			x++;
		}
	}

}
