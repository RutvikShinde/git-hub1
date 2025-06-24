// evenNoSumLoop.c
#include <stdio.h>
int main()
{
    int i, n,sum;
    sum =0;
    printf("enter a nmuber");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum +=i;

            // printf("\neven number sum is %d", sum);
        }
        
    }
    printf("even number sum from 1 to %d = %d ",n,sum);

    return 0;
}