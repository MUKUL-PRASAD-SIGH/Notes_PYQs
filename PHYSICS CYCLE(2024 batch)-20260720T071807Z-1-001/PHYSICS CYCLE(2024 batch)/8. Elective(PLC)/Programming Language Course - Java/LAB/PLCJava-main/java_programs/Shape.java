import java.util.*;
import java.lang.Math;
abstract class Shape
{
	final double PI = 3.141592625;
	abstract double area();
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("1. Area of Rectangle\n2. Area of Circle\n3. Area of Rectangle\nEnter your choice: ");
		int i = sc.nextInt();
		switch(i)
		{
			case 1:
			{
				Rectangle r = new Rectangle();
				System.out.println("Area of the Rectangle is "+r.area()); break;
			}
			case 2:
			{
				Circle c = new Circle();
				System.out.println("Area of the Circle is "+c.area()); break;
			}
			case 3:
			{
				Triangle t = new Triangle();
				System.out.println("Area of the Triangle is "+t.area()); break;
			}
			default:
			System.out.println("Invalid Choice! Program Terminates!"); System.exit(0);
		}
	}		
}
class Rectangle extends Shape
{
	double length, breadth;
	Rectangle()
	{
	        Scanner sc = new Scanner(System.in);
		System.out.println("Enter the length and breadth of the Rectangle: ");
		length = sc.nextDouble();
		breadth = sc.nextDouble();
	}
	double area()
	{
		return(length*breadth);
	}
}
class Circle extends Shape
{
	double radius;
	Circle()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the radius of the Circle: ");
		radius = sc.nextDouble();
	}
	double area()
	{
		return (PI*Math.pow(radius,2.0));
	}
}
class Triangle extends Shape
{
	double s, m, n, o;
	Triangle()
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the lengths of the sides of the triangle: ");
		m = sc.nextDouble();
		n = sc.nextDouble();
		o = sc.nextDouble();
	}
	double area()
	{
		return(Math.sqrt(s*(s-m)*(s-n)*(s-o)));
	}
}

		
		
