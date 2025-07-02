 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
    FILE *fp;
    char data[100];
    int i,n,key,count=0,a[100];
    fp = fopen("number.txt","r");
    printf("enter a N \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d ",&a[i]);
        printf("%d ",a[i]);

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