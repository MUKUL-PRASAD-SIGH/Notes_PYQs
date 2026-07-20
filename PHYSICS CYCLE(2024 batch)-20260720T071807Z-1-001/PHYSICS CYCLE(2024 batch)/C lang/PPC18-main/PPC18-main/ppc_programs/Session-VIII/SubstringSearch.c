#include<stdio.h>
#include<stdlib.h>

int SearchSubstring(char* sub, char* tar)
{
    int i, ls=0, lt=0, j, flag = 0;
    for(i=0;*(sub+i)!='\0';i++)
    ls++;
    for(i=0;*(tar+i)!='\0';i++)
    lt++;
    if(ls>lt)
    {
        printf("Substring is longer than Target String. Program terminates.");
        exit(0);
    }
    for(i=0;i<lt;i++)
    {
        if(*(sub)==*(tar+i))
        {
            for(j=0;j<ls;j++)
            {
                if(*(sub+j)!=*(tar+i+j))
                goto first;
                else if(j==ls-1)
                {
                    flag = 1;
                    goto second;
                }
            }
        }
        first:
    }
    second:
    if(flag==1)
    return i;
    else 
    return -1;
}
int main(void)
{
    char t[100], s[50];
    printf("Enter the Target String: ");
    scanf(" %[^\n]",t);
    printf("Enter the substring: ");
    scanf(" %[^\n]",s);
    if(SearchSubstring(s,t)==-1)
    printf("Substring not found!");
    else
    printf("Substring found at index %d of the Target String.",SearchSubstring(s,t));
}