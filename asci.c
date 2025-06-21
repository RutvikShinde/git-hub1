#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Anything :");
    scanf("%c", &ch);
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        printf("Alphabets");
    else if ((ch >= 48 && ch <= 57))
        printf("digits");
    else
        printf("special characters");
    return 0;
}