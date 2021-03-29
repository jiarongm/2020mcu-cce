#include <stdio.h>
char line[20]="2134562213312231221";
int main()
{
    char *p=line;
    for(int i=0;line[i]!=0;i++){
        p = &line[i];
        char c=line[i];
        if(c!='2')printf("%c",c);



    }
    printf("\n");
}
