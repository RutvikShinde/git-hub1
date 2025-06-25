#include<stdio.h>
int main ()
{
    int n,fact;
    printf("enter a number");
    scanf("%d",&n);
    fact=1;
    while(n>=2)
    {
        fact =fact*n;
        n--;

    }
    printf("factorial is %d",fact);
    return 0;
}