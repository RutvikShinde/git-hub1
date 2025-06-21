#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(b<a && b<c)
    {
        printf("number is between %d and %d",a,c);
    }
    else
    {
        printf("number is not between %d and %d",a,c);
    }
    return 0;
}