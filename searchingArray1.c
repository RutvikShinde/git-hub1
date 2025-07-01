#include<stdio.h>
int main ()
{
    int n,i,a[100],key,r,flag=0;
//    int a=[10,20,30,40,50,60,70,80,90];
 printf("how many elements you want to enter ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("given data is \n");
    for (i = 0; i < n; i++)
        printf("\n%d", a[i]);

    printf("\nenter a elment you want to search ");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        if (key == a[i])
      {  
        flag =1;
        break;
      } 
    }
    if (flag==1)
    printf("%d found",r);
    else
    {
    printf("%d not found",r);
    }
    return 0;
}