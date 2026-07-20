#include<stdio.h>

double Aggregate(double* quiz, double* mid, double final)
{
    double Q = 0, M = 0;
    for(int i=0;i<4;i++)
    {
        Q = Q + *(quiz+i);
    }
    for(int i=0;i<2;i++)
    {
        M = M + *(mid+i);
    }
    Q = Q*3/4;
    M = (M/5)*2;
    final = (final/10)*3;
    if((Q+M+final)<100)
    return (Q+M+final);
    else
    return 0;
}
int main(void)
{
    double q[4], m[2], f;
    printf("Enter the marks out of 10 attained by student in the four quizzes: ");
    for(int i=0;i<4;i++)
    {
        printf("Quiz %d: ",(i+1));
        scanf("%lf",(q+i));
    }
    printf("Enter the marks out of 50 attained by student in the two mid-terms: ");
    for(int i=0;i<2;i++)
    {
        printf("Mid-term %d: ",(i+1));
        scanf("%lf",(m+i));
    }
    printf("Enter the marks out of 100 attained by student in final exam: ");
    scanf("%lf",&f);
    printf("\nTotal aggregate of the student is %lf.",Aggregate(q,m,f));
}