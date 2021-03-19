                        #include <stdio.h>
struct DATA{
    float x,y,z;
}   point;
int main()
{
    point.x=1;
    point.y=2;
    point.z=3;
    printf("%f %f %f \n", point.x , point.y , point.z);
}
