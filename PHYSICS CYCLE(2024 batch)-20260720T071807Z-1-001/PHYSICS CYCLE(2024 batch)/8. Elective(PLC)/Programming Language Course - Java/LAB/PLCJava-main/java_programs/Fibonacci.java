import java.util.*;
class Fibonacci
{
    public static void main(String[] args)
    {
        int i = 0, n, n1 = 1, n2 = 1, n3;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of terms of the series to be printed: ");
        n = sc.nextInt();
        System.out.print(" "+n1+" "+n2);
        while(i<(n-2))
        {
            n3 = n2+n1;
            System.out.print(" "+n3);
            n1 = n2;
            n2 = n3;
            i++;
        }
        sc.close();
    }
}