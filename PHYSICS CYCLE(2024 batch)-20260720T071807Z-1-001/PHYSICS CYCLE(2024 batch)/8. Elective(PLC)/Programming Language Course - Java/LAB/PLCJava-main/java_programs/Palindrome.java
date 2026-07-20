import java.util.*;
class Palindrome
{
    void pal(int n)
    {
        int temp = n, rev = 0, d;
        while(n>0)
        {
            d = n%10;
            rev = rev*10+d;
            n/=10;
        }
        if(rev==temp)
        System.out.println("The number is a palindrome.");
        else
        System.out.println("The number is not a palindrome.");
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Palindrome ob1 = new Palindrome();
        System.out.println("Enter the number: ");
        int num = sc.nextInt();
        ob1.pal(num);
        sc.close();
    }
}
