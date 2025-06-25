#include<stdio.h>
int main ()
{
    int count=0,n;
    printf("enter a nmber");
    scanf("%d",&n);
    while(n>0)
    {
        count++;
        n=n/10;
    }
    printf("count  is %d",count);
    return 0;
}
