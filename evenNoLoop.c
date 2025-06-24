#include <stdio.h>
int main()
{
    int i, n;
    printf("enter a nmuber");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {

            printf("\neven number are %d", i);
        }
    }

    return 0;
}