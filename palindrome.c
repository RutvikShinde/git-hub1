#include<stdio.h>
int main ()
{
    int i,n,rem,rev=0,temp=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
    rem =n%10;
    rev= rev*10+rem;
    n/10;
    }
    if(rev==temp)
    {
        printf("palindrome number");
    }
    else
    printf("not a palindrome number");
    return 0;
}