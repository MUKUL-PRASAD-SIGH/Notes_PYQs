import java.util.*;
class Complex
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        double r1, i1, r2, i2;        
        System.out.println("Enter the real part of the first complex number: ");
        r1 = sc.nextDouble();
        System.out.println("Enter the imaginary part of the first complex number: ");
        i1 = sc.nextDouble();
        System.out.println("Enter the real part of the second complex number: ");
        r2 = sc.nextDouble();
        System.out.println("Enter the imaginary part of the first complex number: ");
        i2 = sc.nextDouble();
        double r = r1+r2;
        double i = i1+i2;
        if(i>0)
        System.out.println("The sum of the two complex numbers is: "+r+" + "+i+"i");
        else
        System.out.println("The sum of the two complex numbers is: "+r+" - "+(-i)+"i");
        sc.close();
    }        
}
