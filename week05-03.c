#include <stdio.h>
int main()
{
    char n1[10]="decline";
    char n2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",n1);
    printf("%s\n",n2);

    char n3[]="majority�o�O�n���A�n�h�����h��";
    char n4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",n3);
    printf("�o�On4:====%s====\n",n4);
}
