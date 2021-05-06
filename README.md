# 2020mcu-cce-09161141
## week01-實習
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
## week03-實習
### 進階題：大小寫轉換 
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[10];
	scanf("%s", a);
	for(int i=0;i<strlen(a);i++){
		if(a[i] >='A' && a[i] <='Z' ){
			a[i]=a[i]+32;
			printf("%c",a[i]);
		}
		else if(a[i] >='a' && a[i] <='z' ){
			a[i]=a[i]-32;
			printf("%c",a[i]);
		}
		else printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}
```
### 進階題：漸增數列相加
```c
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		sum+=i*(i+1);
	}
	printf("%d\n",sum);
}
```
### 進階題：計算陣列的平方值
```c
#include <stdio.h>
int main()
{
	int n,x;
	int a[11]={};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>a[i+1]&&a[i+1]!=0){
			int t;
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```
### 進階題：2進位轉10進位
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",n/1000*8+n%1000/100*4+n%100/10*2+n%10*1);
}
```
### week04 實習

### week08 正課
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare(const void* p1,const void* p2){
	return strcmp((char*)p1,(char*)p2);//(型別轉換)
}
int main(){
	int n;
	scanf("%d\n\n",&n);//information number

	for(int t=0;t<n;t++){
		int N=0;
		for(int i=0; ;i++){
			gets(tree[i]);
			if(strcmp(tree[i],"")==0){
				N=i;
				break;
			}
		}
		qsort(tree,N,sizeof(tree[32]),compare);


		float x=1.0;
		for(int i=0;i<N;i++){
			if(strcmp(tree[i],tree[i+1])==0){
				x++;

			}
			else {
				printf("%s %.4f\n",tree[i],x/N*100);
				x=1;
			}memset(tree[i],'\0',32);
		}
		if(t!=n-1)printf("\n");
	}

}
```
## week10
```c
#include <stdio.h>
char line[10000];
int main()
{
	int n;
	scanf("%d\n",&n);// \n避免輸入換行站位
	for(int i=0;i<n;i++){
		gets(line);
		printf("%s\n",line);
	}
}
```
#### 轉換大小寫
```c
#include <stdio.h>
char line[10000];
char number[26];
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(line);
		for(int k=0;line[k]!=0;k++){
			char c=line[k];
			if(c>='A' && c<='Z')printf("大");
			else if(c>='a' && c<='z')printf("小");
			else printf("其他");
		}
	}
}
```
### 數數
```c
#include <stdio.h>
char line[10000];
char number[26];//總共26個字母
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(line);
		for(int k=0;line[k]!=0;k++){
			char c=line[k];
			if(c>='A' && c<='Z')		number[c-'A']++;
			else if(c>='a' && c<='z')	number[c-'a']++;
			
		}
	}
	for(int i=0;i<26;i++){
		printf("%c %d\n",'A'+i,number[i]);
	}
}
```
### 排序(數字>字母順序)
```c
#include <stdio.h>
char line[10000];
char number[26];
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(line);
		for(int k=0;line[k]!=0;k++){
			char c=line[k];
			if(c>='A' && c<='Z')		number[c-'A']++;
			else if(c>='a' && c<='z')	number[c-'a']++;
			
		}
	}
	for(int i=0;i<26;i++){
		for(int j=i+1;j<26;j++){
			if(number[i]<number[j] ||( number[i]==number[j]&& alphabet[i]>alphabet[j] )  ){
				int temp=number[i];
				number[i]=number[j];
				number[j]=temp;
				char c        = alphabet[i];
				alphabet[i]   = alphabet[j];
				alphabet[j]   = c;
			}
		}
	}
	for(int i=0;i<26;i++){
		if(number[i]>0)printf("%c %d\n",alphabet[i],number[i]);
	}
}
```
### 結束
```c
#include <stdio.h>
#include <stdlib.h>
char line[10000];
typedef struct{//資料結構
	int number;
	char c;
}BOX;
BOX arry[26];
int compare(const void* p1,const void* p2){
	if( ((BOX*)p1)->number > ((BOX*)p2)->number )return -1;
	else if( ((BOX*)p1)->number < ((BOX*)p2)->number )return +1;
	else if( ((BOX*)p1)->c >((BOX*)p2)->c )return +1;
	else if( ((BOX*)p1)->c <((BOX*)p2)->c )return -1;
	else return 0;
}

int main()
{
	for(int i=0;i<26;i++) arry[i].c='A'+i;
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);///gets()讀整行
		for(int k=0;line[k]!=0;k++){
			char c=line[k];
			if(c>='A' && c<='Z')		arry[ c-'A' ].number++;
			else if(c>='a' && c<='z')	arry[ c-'a' ].number++;
			
		}
	}
	qsort(arry,26,sizeof(BOX),compare);

	for(int i=0;i<26;i++){
		if(arry[i].number>0)printf("%c %d\n",arry[i].c , arry[i].number);
	}
}

```
<hr>
<h2>week11</h2>
<br>

```c
#include <stdio.h>
unsigned char c;
typedef unsigned char uchar;
uchar d;
int main()
{
    c='A';
    d=c;
    printf("%c",d);
}
```
