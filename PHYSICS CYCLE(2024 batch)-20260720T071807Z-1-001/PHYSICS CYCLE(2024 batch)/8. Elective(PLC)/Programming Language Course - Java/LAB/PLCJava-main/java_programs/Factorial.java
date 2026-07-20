import java.util.*;
class Factorial
{
    int fact(int n)
    {
        int i, f=1;
        for(i=1;i<=n;i++)
        f = f*i;
        return f;
    }
    public static void main(String[] args)
    {
        Factorial ob1 = new Factorial();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number whose factorial is to be found: ");
        int num = sc.nextInt();
        System.out.println("The factorial of the number is: "+ob1.fact(num));
        sc.close();        
    }
}