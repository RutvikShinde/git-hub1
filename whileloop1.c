#include <stdio.h>
int main()
{
    int i, n, sum;
    sum = 0;
    printf("Enter a number");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("sum is %d", sum);
    return 0;
}