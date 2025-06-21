#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number");
    scanf("%d", &number);
    if (number % 5 == 0 || number % 7 == 0)
    {
        printf("number is divisible by 5 or 7 ");
    }
    else
    {
        printf("number is not divisible by 5 or 7");
    }
    return 0;
}