#include<stdio.h>
int main(void)
{
    int m, n;
    printf("Enter order of the matrix: ");
    scanf("%d %d",&m,&n);
    int a[m][n], i, j, rsum, csum;
    printf("Enter the elements of the first matrix: ");
    for(i=0;i<m;i++)
    {
        printf("Row %d: ",(i+1));
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        rsum = 0;
        for(j=0;j<n;j++)
        {
            rsum += a[i][j];
        }
        printf("Row %d sum = %d\n",(i+1),rsum);
    } 
    for(i=0;i<n;i++)
    {
        csum = 0;
        for(j=0;j<m;j++)
        {
            csum += a[j][i];
        }
        printf("Column %d sum = %d\n",(i+1),csum);
    }       
}