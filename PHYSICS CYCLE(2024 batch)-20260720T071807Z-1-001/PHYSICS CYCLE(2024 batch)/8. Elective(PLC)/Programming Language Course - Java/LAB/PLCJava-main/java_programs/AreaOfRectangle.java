import java.util.*;
class AreaOfRectangle
{
	double length, breadth;
	AreaOfRectangle()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter length and breadth of the rectangle: ");
		double l = sc.nextDouble();
		double b = sc.nextDouble();
		length = l;
		breadth = b;
	}
	double area(double length, double breadth)
	{
		return (length*breadth);
	}
	public static void main(String[] args)
	{
		AreaOfRectangle r = new AreaOfRectangle();
		System.out.println("Area of Rectangle = "+r.area(r.length,r.breadth));
	}
} 
	
