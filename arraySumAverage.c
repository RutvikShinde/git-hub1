#include <stdio.h>
int main()
{
    int i, n, sum = 0, average, a[100];
    printf("enter the number of elememnts you want to enter ");
    scanf("%d", &n);
    printf("enter the array elements ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        printf("\ngiven data is %d", a[i]);
        sum=sum+a[i];
    }
    printf("\nsum = %d",sum);
    printf("\nAverage = %d",sum/n);
    return 0;
}