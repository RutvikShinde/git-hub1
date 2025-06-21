#include<stdio.h>
int mian ()
{
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if (number%5==0 && number%7==0)
    {
        printf("The number is divisible by 5 & 7 both%d",number);
    }
    else if (number % 5==0)
    {
        printf("number is divisible by 5%d",&number);
    }
    else if(number %7==0)
    {
        printf("number is divisible by 7%d",&number);
    }
    else
    {
        printf("number is not divisible by 5 or 7");
    }
    return 0;
}