#include<stdio.h>
int main ()
{
    int i,n,fact=1;
    printf("enter a number");
    scanf("%d",&n);
    i=2;
    while (i<=n)
    {
       fact =fact*i;
       i++; 
    }
    printf("factorial is %d",fact);
    return 0;
    
}