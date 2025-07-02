#include <stdio.h>
int main()
{
    int i, n, a[100], key, count=0;
    printf("enter the no of array size");
    scanf("%d", &n);
    printf("enter array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nenter element for occurance ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)

            count++;
    }
    if (count == 0)
    {
        printf("key not found");
    }
    else
    {
        printf("count is %d", count);
    }
    return 0;
}