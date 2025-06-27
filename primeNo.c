#include<stdio.h>
int main ()
{
    int i,n,count=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
            count++;
        }
    }
    if(count==2)
    {
        printf("prime");

    }
    else 
    {
        printf("not prime");
    }
    return 0;
}