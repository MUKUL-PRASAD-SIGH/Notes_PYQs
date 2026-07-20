#include<stdio.h>
#include<string.h>

void strlendemo(char* str)
{
    printf("\nLength of string is %d.",strlen(str));
}
void strcmpdemo(char* str1, char* str2)
{
    printf("\nComparison value: %d",strcmp(str1, str2));
}
void strcpydemo(char* des, char* source)
{
    strcpy(des,source);
    printf("\nString des is %s after copying source to it.",des);
}
void strcatdemo(char* str1, char* str2)
{
    strcat(str1, str2);
    printf("\nstr1 after concatenation with str2 is %s.",str1);
}
int main(void)
{
    char des[100];
    char str1[100] = "Mohit";
    printf("\nstrlen() demo: ");
    strlendemo("Mohit");
    printf("\nstrcmp() demo: ");
    strcmpdemo("Mohit","MohiT");
    printf("\nstrcpy() demo: ");
    strcpydemo(des,"Nair");
    printf("\nstrcat() demo: ");
    strcatdemo(str1," Nair");
}