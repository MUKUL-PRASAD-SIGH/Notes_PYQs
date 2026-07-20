#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    if(isalnum(c))
    {
        printf("\nChracter is alphanumeric.");
        if(isalpha(c))
        {
            printf("\nCharacter is alphabetic.");
            if(isupper(c))
                {
                    printf("\nCharacter is uppercase.");
                    printf("\nLowecase equivalent: %c",tolower(c));
                }
            if(islower(c))
            {
                printf("\nCharacter is lowercase.");
                printf("\nUppercase equivalent: %c",toupper(c));
            }
        }
        if(isdigit(c))
        printf("\nCharacter is numeric digit.");
    }
    if(ispunct(c))
    {
        printf("\nCharacter is punctuation symbol.");
    }
    if(isspace(c))
    {
        printf("\nCharacter is blank space.");
    }
}