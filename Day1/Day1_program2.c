//2.Consider a character input from a user and print if it is a vowel or consonant.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Character : ");
    scanf("%c", &ch);
    if (( ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        printf("VOWEL");
    }
    else if (( ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        printf("VOWEL");
    }
    else if (((ch >= 'a' ) && (ch <= 'z')) || ( ( ch >= 'A' ) && (ch <= 'Z')))
    {
        printf("constant");
    }
    else
    {
        printf("Not a alphabet");
    }
}

