#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("minimum number is %d",b);

    }
else
{
    printf("minimum number is %d",a);
}
return 0;
}