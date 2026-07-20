import java.util.*;
class Operators
{
    void Relational(int a, int b)
    {
        System.out.println(a+" < "+b+" is "+(a<b));
        System.out.println(a+" > "+b+" is "+(a>b));
        System.out.println(a+" <= "+b+" is "+(a<=b));
        System.out.println(a+" >= "+b+" is "+(a>=b));
        System.out.println(a+" == "+b+" is "+(a==b));
        System.out.println(a+" != "+b+" is "+(a!=b));
    }
    void Arithmetic(int a, int b)
    {
        System.out.println(a+" + "+b+" is "+(a+b));
        System.out.println(a+" - "+b+" is "+(a-b));
        System.out.println(a+" / "+b+" is "+(a/b));
        System.out.println(a+" * "+b+" is "+(a*b));
        System.out.println(a+" % "+b+" is "+(a%b));
    }
    void Bitwise(int a, int b)
    {
        System.out.println(a+" & "+b+" is "+(a&b));
        System.out.println(a+" | "+b+" is "+(a|b));
        System.out.println(a+" ^ "+b+" is "+(a^b));
        System.out.println("~"+a+" is "+(~a));
        System.out.println(+a+">>2"+" is "+(a>>2));
        System.out.println(+a+"<<2"+" is "+(a<<2));
    }



    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int x,y;
        Operators ob1 = new Operators();
        System.out.println("Enter the two numbers: ");
        x = sc.nextInt();
        y = sc.nextInt();

        ob1.Relational(x,y);
        ob1.Arithmetic(x,y);
        ob1.Bitwise(x,y);
        sc.close();
    }
}