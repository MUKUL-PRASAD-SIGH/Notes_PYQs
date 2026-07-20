import java.util.*;
class LargestandSmallest 
{
    int largest(int a, int b, int c) 
    {
        int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
        return max;
    }       
    int smallest(int a, int b, int c)
    {
        int min = (a<b)?((a<c)?a:c):((b<c)?b:c);
        return min;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        LargestandSmallest ob1 = new LargestandSmallest();
        System.out.println("Enter the three numbers: ");
        int x = sc.nextInt();
        int y = sc.nextInt();
        int z = sc.nextInt();
        System.out.println("Largest is "+ob1.largest(x,y,z));
        System.out.println("Smallest is "+ob1.smallest(x,y,z));
        sc.close();
    }
}
