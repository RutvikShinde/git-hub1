#include<stdio.h>
int main ()
{
    int i,n,rem,rev;
    printf("enter a number");
    scanf("%d",&n);
    rev=0;
    while (n>0)
    {
        int rem=n%10;
        rev =rev*10+rem;
        n=n/10;

    }
    printf("reverse number is %d",rev);
    return 0;
    
}