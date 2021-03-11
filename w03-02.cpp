#include <stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80,90};
void printfall(){
    for(int i=0;i<10;i++){
        printf("%3d,",a[i]);
    }
    printf("\n");


}
int main()
{

    int *p=&a[2];
    *p=222;
    printfall();

    int *p2=p+3;
    *p2=666;
    printfall();

    p2--;
    *p2=555;
    printfall();

}
