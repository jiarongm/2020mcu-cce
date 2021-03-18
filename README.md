# 2020mcu-cce-09161141
## week1
### 進階題：分式化簡 
```c
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

```
### 進階題：讀入整數反序列印 
```c
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
```
### 進階題：A的B次方函數
```C
#include <stdio.h>
int MYPOWER(int a,int b){
	int ans;
	for(int i=1;i<b;i++){
		ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
### 進階題：漸增數列相加
```c
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
```
### 基礎題：找零錢 
```c
#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	printf("%d=50*%d+5*%d+1*%d\n",x,x/50,x%50/5,x%5);
}
```
### 基礎題：因數個數 
```c
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
```
### 基礎題：找倍數
```c
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
```
### 基礎題：整數轉換為等級
```c
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
```
