#include<stdio.h>
int main(void)
{
    int m, n, i, j;
    printf("Enter order of the matrix: ");
    scanf("%d %d",&m,&n);
    int a[m][n], t[n][m];
    printf("Enter the elements of the matrix: ");
    for(i=0;i<m;i++)
    {
        printf("Row %d: ",(i+1));
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            t[j][i] = a[i][j];
        }
    }
    printf("The Transpose matrix is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%3d ",t[i][j]);
        }
        printf("\n");
    }
}