# 2020mcu-cce
# week1
#1

```c
	int x,y,c;
	scanf("%d%d",&x,&y);
	for(int i=2;i<=x;i++){
		if(x%i==0&&y%i==0){
			c=i;
		}
	
	}
	printf("%d %d\n",x/c,y/c);
```c


#2

```c
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
```c
#3
```c
