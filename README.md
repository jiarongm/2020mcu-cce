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
typedef unsigned char uchar;//重新命名
uchar d;
int main()
{
    c='A';
    d=c;
    printf("%c",d);
}
```
<p>typedef 前面是舊名字 新名字; 可以[再定義]</p><br>

```c
#include <stdio.h>
typedef struct data{
    char c;
    int ans;
} DATA;// typedef 前面是舊名字 新名字; 可以[再定義]
DATA listA;
int main()
{
    listA.c='A';
    listA.ans=1;
    printf("%c %d\n",listA.c,listA.ans);
}
```

```c
#include <stdio.h>
#include <stdlib.h>
int compare(const void* p1,const void* p2){
    int d1=*( (int*)p1 );
    int d2=*( (int*)p2 );
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;

}
int a[10]={4,6,5,8,9,7,2,3,1,10};
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);

    }
}
```
<hr>
<h2>week12</h2>
<h4>UVA10062</h4>
<br>


```c

#include <stdio.h>
char line[1001];
int main()
{
	for(int i=0;gets(line);i++){
		
		int ans[256]={};
		char ascii[256];
		for(int t=0;t<256;t++)ascii[t]=t;
		for(int t=0;line[t]!=0;t++){
			char c=line[t];
			ans[c]++;
		}
		
		for(int t=0;t<256;t++){
			for(int x=t+1;x<256;x++){
				if(ans[t]>ans[x]){
					int temp=ans[t];
					ans[t]=ans[x];
					ans[x]=temp;
					char c=ascii[t];
					ascii[t]=ascii[x];
					ascii[x]=c;
				}
				if(ans[t]==ans[x] && ascii[t]<ascii[x]){ //字母的頻率相同時 字母從大到小排序
					int temp=ans[t];
					ans[t]=ans[x];
					ans[x]=temp;
					char c=ascii[t];
					ascii[t]=ascii[x];
					ascii[x]=c;
				}
			}
		}
		
		
		if(i>0)printf("\n");
		for(int t=0;t<256;t++){
			if(ans[t]>0)printf("%d %d\n",ascii[t],ans[t]);
		}
	}
}
```
### UVA299

```c
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
	
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		int ans=0;
		for(int k=0;k<N-1;k++){			//兩兩相比 省去最後一次
			for(int i=0;i<N-1;i++){		//兩兩相比 最右邊-1
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
### UVA11321
```c
#include <stdio.h>
#include <stdlib.h>
/*int compare(const void* p1,const void* p2)
{
	
}*/
int a[10000];
int main()
{
	int N,M;
	while( scanf("%d %d",&N,&M)==2){
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		printf("%d %d\n",N,M);
		
		for(int i=0;i<N;i++){
			for(int j=i+1;j<N;j++){
				if(a[i]%M > a[j]%M){//餘數小到大
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				if(a[i]%M==a[j]%M && a[i]%2==0 && a[j]%2!=0 ){//餘數相同-奇數先排
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				if(a[i]%M==a[j]%M && a[i]%2!=0 && a[j]%2!=0 && a[i]<a[j] ){//奇數由大到小
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				if(a[i]%M==a[j]%M && a[i]%2==0 && a[j]%2==0 && a[i]>a[j] ){//偶數小到大
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				
			}
		}
		
		//*qsort(a,N,10000,compare);
		
		for(int i=0;i<N;i++){
			printf("%d\n",a[i]);
		}
	}
} 	
```

### week13-14互動式程式設計

```
void setup()
{
  size(1024,400);
  textFont(createFont("標楷體",80) );//使用中文
}
void draw(){//互動版本 每秒畫60次
  background(240,180,90);
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23
  textSize(48);//字體大小
  text(h + ":" + m + ":" + s , 100 , 200);
    //數字+字串  數字+字串  數字
  int total=s + 60*m + 60*60*h;//現在總秒數
  int closeH=17, closeM=40, closeS=0;//下課時間
  int total2=closeS + 60*closeM + 60*60*closeH;
  int ans=total2-total;
  int ans2=ans/60;
  text("剩下幾秒:"+ans,100,100);
  text("剩下幾分:"+ans2,400,100);
}

```

```
int []a={1,2,3,4,5,6,7,8,9,10};//Java
int i1,i2;
void setup(){
  size(400,100);        //視窗大小
  textSize(20);        //文字大小
}
void draw(){            //每秒畫60次
  background(102,189,233);
  for(int i=0;i<10;i++){
    text( a[i],i*40,50);
  }
  rect(i1*40, 50, 30, 30);//方塊(X座標,Y座標 , X長,Y寬)
  rect(i2*40, 50, 30, 30);
}
void mousePressed(){
    for(int i=0;i<100;i++){
    i1=(int)random(10);
    i2=(int)random(10);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;//交換
  }
}
```

```
int []a=new int[47];            //Java的陣列
void setup(){
  size(1000,200);
  textSize(30);
  for(int i=0;i<47;i++)a[i]=i;  //在a[]陣列裡放相應數字
  for(int i=0;i<1000;i++){
    int i1=(int)random(47);
    int i2=(int)random(47);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
    
  }
}
int N=0;

void draw(){
  textAlign(CENTER,CENTER);//文字對齊(中間,中間)
  background(102,165,99);
  for(int i=0;i<N;i++){
    fill(255); ellipse( i*80+40, 100,55,55);//畫圓
    fill(0); text(a[i], i*80+40, 100);// fill顏色填滿
  }
}
void mousePressed(){//利用滑鼠互動 決定秀幾個
  N++;
}
```
### week15
javascript

```
function setup(){
  createCanvas(400,200);
}
function draw(){
  let s=second();
  if(s%2==0){
    background(120,66,133);
 }
  else {
    background(58,66,192);
  }
}
```
滑鼠控制音樂播放
```
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player=new SoundFile(this,"bell.mp3");
  
}
void draw(){
  background(128,187,66);
}
void mousePressed(){
  if(player.isPlaying()){
    player.stop();
  }else{
    player.play();
  }
}
```

```
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  textSize(40);
  player=new SoundFile(this,"tada.mp3");
}
void draw(){
  int s=second();//0.1...59
  background(198,88,88);
  text(10-s%11,150,100);//10-s%11 倒數10秒 
          //%11:0-10共11個數
  if(10-s%11==0 && !player.isPlaying() ){
    player.play();//如果有一個正在撥放 其他則不播
  }
}// %11:因為0-10共11個數字
```

```
void setup(){
  size(400,200);
}
void draw(){
  int s=second();
  if(s%2==0)background(120,66,133);
  else background(58,66,192);
}
```
### week16旋轉盤

```
void setup(){
  size(400,200);
}
float start=0,v=0.03;//v是初始速度

void draw(){
  background(82,66,189);
  if(v>0.001){//如果速度很慢 就不轉
    start+=v;//位置 .速度 .加速度(位置 +速度)
    v *=0.99;//位置 .速度 .加速度(速度 +加速度)
  }
  //fill(255);
  //ellipse(100,100,180,180);//畫圓
        //圓心  寬 高
  //if(start<10)start+=0.01;
  //float start=mouseX/50.0;
  fill(255);textSize(40);text(start,200,150);text(v,250,200);
  for(int i=0;i<24;i++){        //圓分成24等分
    float shift=2*PI*i/24.0;    //PI=圓周率  // 2*PI 圓周
    
    if(i%3==0)fill(0);
    if(i%3==1)fill(#FFF86A);
    if(i%3==2)fill(255);
    if(i==0)fill(#FA761E);
    arc(100,100,180,180,shift+0+start,shift + PI/12 + start);//畫出圓弧
  }
  //圓心  寬 高  開始 結束
}
void mousePressed(){
  v=random(1);    //取亂數
}
```
