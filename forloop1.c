#include<stdio.h>
int main ()
{
    int i,n,sum;
    sum =0;
    printf("enter a number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum +=i;
       
    }
     printf("sum is %d\n",sum);

}