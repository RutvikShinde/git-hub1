#include<stdio.h>
int main ()
{
    int i,n,a[100],largest,smallest;
    printf("enter the no of elements you want to enter ");
    scanf("%d",&n);
    printf("\nenter the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(largest<a[i])
        largest=a[i];

    }
    printf("\n largest element is %d",largest);
    smallest=a[0];
    for(i=0;i<n;i++)
    {
        if (smallest>a[i])
        smallest=a[i];
    }
    printf("\nsmallest element is %d ",smallest);
    return 0;
}