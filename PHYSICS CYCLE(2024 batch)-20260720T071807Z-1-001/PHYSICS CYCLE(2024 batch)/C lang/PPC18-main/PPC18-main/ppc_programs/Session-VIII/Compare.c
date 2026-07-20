#include<stdio.h>

int StringCompare(char* str1, char* str2)
{
    int i, l1, l2;
    for(i=0;*(str1+i)!='\0';i++)
    l1++;
    for(i=0;*(str2+i)!='\0';i++)
    l2++;
    if(l1>=l2)
    {
        for(i=0;*(str2+i)!='\0';i++)
        {
            if(*(str2+i)!=*(str1+i))
            break;
        }
    }
    else if(l2>l1)
    {
        for(i=0;*(str1+i)!='\0';i++)
        {
            if(*(str1+i)!=*(str2+i))
            break;
        }
    }    
    return (int)((*(str1+i))-(*(str2+i)));
}
int main(void)
{
    char s1[100], s2[100];
    printf("Enter the first string: ");
    scanf(" %[^\n]",s1);
    printf("Enter the second string: ");
    scanf(" %[^\n]",s2);
    printf("Comparison Value: %d",StringCompare(s1,s2));
    if(StringCompare(s1,s2)==0)
    printf("\nString are equal.");
    else 
    printf("\nStrings are not equal.");
}