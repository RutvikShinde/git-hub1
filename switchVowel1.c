#include <stdio.h>
#include<ctype.h>
int main()
{
    char vowel;
    printf("enter the character:");
    scanf("%c", &vowel);
    vowel = tolower(vowel);
    switch (vowel)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("tihs is a vowel");
        break;
    default:
       printf("not a vowel");
    }
    return 0;
}