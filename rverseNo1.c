#include<stdio.h>
#include<string.h>
int main ()
{
    char num[100];
    printf("enter a number ");
    scanf("%s",&num);
    strrev(num);
    printf("reverse no %s",num);
    return 0;
}