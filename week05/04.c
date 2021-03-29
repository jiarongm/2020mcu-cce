#include <stdio.h>
int main()
{
    char n[5][10]={"decline","proper" ,"majority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++){
        p=&n[i];
        printf("%s\n",n[i]);


    }
}
