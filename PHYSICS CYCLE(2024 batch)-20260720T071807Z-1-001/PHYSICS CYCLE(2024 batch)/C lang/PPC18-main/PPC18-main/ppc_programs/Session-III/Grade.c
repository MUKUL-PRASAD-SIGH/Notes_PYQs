#include<stdio.h>
#include<stdlib.h>

char Grade(double score)
{
    if(score>100)
    {
        printf("Grade cannot be above 100. Program terminates.");
        exit(0);
        return -1;
    }
    else if(score<=100 && score>=85) 
    return 'A';
    else if(score<85 && score>=70)
    return 'B';
    else if(score<70 && score>=65)
    return 'C';
    else if(score<65 && score>=50)
    return 'D';
    else if(score<50)
    return 'F';
}

int main(void)
{
    double s;
    printf("Enter the score attained by the student: ");
    scanf("%lf",&s);
    printf("Grade obtained: %c",Grade(s));
}