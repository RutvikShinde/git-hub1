// fibonacci series is addition of previous two number is the next number 
#include<stdio.h>
int main ()
{
    int i,n,a=0,b=1,c;
    printf("enter a number");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",a);
    }
    else if (n==2)
    {
    printf("%d\n%d\n",a,b);
    }
    else if (n>2)
    {
    printf("%d\n%d\n",a,b);
    }
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}