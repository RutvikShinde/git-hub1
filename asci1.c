#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Anything :");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("Alphabets");
    else if ((ch >= '0' && ch <= '9'))
        printf("digits");
    else
        printf("special characters");
    return 0;
}