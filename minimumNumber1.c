#include<stdio.h>
int main ()
{
    int a,b;
    printf("Eenter 2 numbers :");
    scanf("%d%d",&a,&b);
    (a>b)?printf("minimum number is %d",b):printf("minimum number is %d",a);
    return 0;
}