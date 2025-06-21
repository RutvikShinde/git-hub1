#include <stdio.h>
int main()
{
    char vowel;
    printf("enter the character:");
    scanf("%c", &vowel);
    switch (vowel)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("tihs is a vowel");
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("tihs is a vowel");
        break;
    default:
       printf("not a vowel");
    }
    return 0;
}