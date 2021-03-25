#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char a[100][10];
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}

	char temp[10];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if( strcmp( a[i],a[j] )>0 ){
				strcpy( temp,a[i]);
				strcpy( a[i],a[j]);
				strcpy( a[j],temp);
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);

	}
}
