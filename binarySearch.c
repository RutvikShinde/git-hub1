#include <stdio.h>
int main()
{
    int a[100], i, n, j, temp = 0,low,mid,high,key,flag=0;
    printf("how many elements you want to enter ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("given data is \n");
    for (i = 0; i < n; i++)
        printf("\n%d", a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
       
    }
    for (i = 0; i < n; i++)
    {
        printf("\nBubble sorted array is  %d", a[i]);
    }

low =0;
high =n-1;

printf("\nenter the key you want to find ");
scanf("%d",&key);

while(low <=high)
{
    mid =(low+high)/2;
    if (a[mid]==key)
    {
        flag =1;
        break;
    }
    else if (a[mid]>key)
    {
        high =mid-1;
    }
    else 
    {
        low = mid +1;
    }
}
if (flag ==1)
{
    printf("key found %d", key);
}
else
{
printf("key not found %d",key);
}

    return 0;
}