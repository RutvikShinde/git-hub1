#include<stdio.h>
int main ()
{
    int n;
    printf("Enter 1 number:");
    scanf("%d",&n);
    (n>=0)?printf("Number is poistive %d"):printf("Number is negative %d");
    return 0;
}