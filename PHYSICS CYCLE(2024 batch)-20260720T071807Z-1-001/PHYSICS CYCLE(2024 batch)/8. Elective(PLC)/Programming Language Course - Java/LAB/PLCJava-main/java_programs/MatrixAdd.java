import java.util.*;
class MatrixAdd 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int m, n, p, q, i, j;
        System.out.println("Enter the order of the first matrix: ");
        m = sc.nextInt();
        n = sc.nextInt();
        System.out.println("Enter the order of the second matrix: ");
        p = sc.nextInt();
        q = sc.nextInt();
        int A[][] = new int[m][n];
        int B[][] = new int[p][q];
        int C[][] = new int[m][n];
        if(m==p && n==q)
        {
            System.out.println("Enter the elements of the first matrix: ");
            for(i=0;i<m;i++)
            {
                System.out.print("Row "+(i+1)+": ");
                for(j=0;j<n;j++)
                {
                    A[i][j] = sc.nextInt();
                }
            } 
            System.out.println("Enter the elements of the second matrix: ");  
            for(i=0;i<p;i++)
            {
                System.out.print("Row "+(i+1)+": ");
                for(j=0;j<q;j++)
                {                    
                    B[i][j] = sc.nextInt();
                }
            }  
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    C[i][j] = A[i][j] + B[i][j];
                }
            }  
            System.out.println("The Sum of the two matrices entered: ");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    System.out.print(C[i][j]+" ");
                }
                System.out.println("");
            }                         
        }
        else
        {
            System.out.println("Incompatible matrices. Program terminates.");
            System.exit(0);
        }
        sc.close();  
    }          
}
