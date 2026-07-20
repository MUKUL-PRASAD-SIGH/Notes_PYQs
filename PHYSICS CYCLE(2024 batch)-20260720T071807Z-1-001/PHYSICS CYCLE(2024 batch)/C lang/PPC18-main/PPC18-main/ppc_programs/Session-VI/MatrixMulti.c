#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int m, n, o, q;
    printf("Enter order of the first matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter order of the second matrix: ");
    scanf("%d %d",&o,&q);
    if(n==o)
    {
        int a[m][n], b[o][q], i, j, k, p[m][q];
        printf("Enter the elements of the first matrix: ");
        for(i=0;i<m;i++)
        {
            printf("Row %d: ",(i+1));
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of the second matrix: ");
        for(i=0;i<o;i++)
        {
            printf("Row %d: ",(i+1));
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                p[i][j] = 0;
                for(k=0;k<n;k++)
                p[i][j]+=(a[i][k]*b[k][j]);
            }
        }       
        printf("The Product matrix is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%3d ",p[i][j]);
            }
            printf("\n");
        }
    }
    else 
    printf("The matrices are incompatible for multiplication."); 
}
