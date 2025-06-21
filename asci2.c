#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("enter anything");
    scanf("%c", &ch);
    if (isalpha(ch))
        printf("alphabets");
    else if (isdigit(ch))
        printf("digits");
    else
        printf("special characters");
    return 0;
}