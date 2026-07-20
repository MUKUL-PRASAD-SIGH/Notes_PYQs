#include<stdio.h>
#include<string.h>
struct StudentMarks
{
    int m[3];
    char fname[25];
    char lname[25];
};

int main(void)
{
    struct StudentMarks s[3]; int i, j;
    for(i=0;i<3;i++)
    {
        printf("Enter the name of Student %d: ",i+1);
        scanf("%s %s",s[i].fname,s[i].lname);
        for(j=0;j<3;j++)
        {
            printf("Enter the marks of Student %d in Subject %d: ",i+1,j+1);   
            scanf("%d",&s[i].m[j]);
        } 
    }
    printf("\t=====STUDENT DETAILS=====\n");
    for(i=0;i<3;i++)
    {        
        int sum = s[i].m[0] + s[i].m[1] + s[i].m[2];
        printf("\nStudent %d",i+1);
        printf("\nName: %s %s",s[i].fname,s[i].lname);
        printf("\nTotal Marks: %d",sum);
    }
}