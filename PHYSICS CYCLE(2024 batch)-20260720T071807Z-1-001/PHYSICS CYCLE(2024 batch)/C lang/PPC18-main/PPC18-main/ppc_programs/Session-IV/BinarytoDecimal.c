#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int BtoD(char* B)
{
    int i, l = 0, D = 0, p = 0;
    for(i=0;*(B+i)!='\0';i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        if(*(B+i)!= '1' && *(B+i)!= '0')
        {
            printf("Entered binary number is not valid. Program terminates. ");
            exit(0);
        }
        if(*(B+i)=='1')
        D += pow(2,p);
        p++;
    }
    return D;
}
int main(void)
{
    char Bin[100];
    printf("Enter the binary number: ");
    gets(Bin);
    printf("The Decimal conversion of entered Binary code is: %d.",BtoD(Bin));
}