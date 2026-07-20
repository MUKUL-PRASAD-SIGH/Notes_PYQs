#include<stdio.h>

char* StringConcatenate(char* str1, char* str2)
{
    int l1=0, i;
    for(i=0;*(str1+i)!='\0';i++)
    {
        l1++;
    }
    for(i=l1;*(str2+i-l1)!='\0';i++)
    {
        *(str1+i) = *(str2+i-l1);
    }
    *(str1+i) = '\0';
    return str1;
}
int main(void)
{
    char s1[100], s2[50];
    printf("Enter the first string: ");
    scanf(" %[^\n]",s1);
    printf("Enter the second string: ");
    scanf(" %[^\n]",s2);
    printf("Resulting string is %s",StringConcatenate(s1, s2));
}