#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    character = tolower(character);
    switch(character)
    {
        case 'a':
        printf("Vowel");
        break;

        case 'e':
        printf("Vowel");
        break;

        case 'i':
        printf("Vowel");
        break;
        
        case 'o':
        printf("Vowel");
        break;

        case 'u':
        printf("Vowel");
        break;

        default:
        printf("consonant");
    }

    return 0;
}
