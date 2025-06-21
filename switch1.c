#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.Multiplication ");
    printf("\n4.Division");
    printf("enter choice");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1 : printf("Addition %d",(a+b));
        break;
        case 2 : printf("Subtraction %d",(a-b));
        break;
        case3 : printf("Multiplication %d",(a*b));
        break ;
        case 4 : printf("Division %d",(a/b));
        break;
        default : printf("invalid choice");
    }
    


return 0;
}