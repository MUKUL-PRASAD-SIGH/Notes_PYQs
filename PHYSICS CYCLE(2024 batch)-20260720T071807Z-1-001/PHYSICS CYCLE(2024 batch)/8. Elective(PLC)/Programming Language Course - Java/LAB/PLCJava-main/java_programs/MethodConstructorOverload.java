import java.util.*;
import java.lang.Math;
class MethodConstructorOverload
{
	double l, b, r, m, n, o;
	//Constructor Overloading
	MethodConstructorOverload(double length, double breadth)
	{
		l = length;
		b = breadth;
	}
	MethodConstructorOverload(double radius)
	{
		r = radius;
	}
	MethodConstructorOverload(double side1, double side2, double side3)
	{
		m = side1;
		n = side2;
		o = side3;
	}
	
	//Function Overloading		
	double area(double l, double b)
	{
		return(l*b);
	}
	double area(double r)
	{
		return(3.141592*Math.pow(r,2));
	}
        double area(double m, double n, double o)
	{
		double s = (m+n+o)/2;
		return(Math.sqrt(s*(s-m)*(s-n)*(s-o)));
	}
	
	public static void main(String[] args)
	{
		MethodConstructorOverload r = new MethodConstructorOverload(5.5,4.0);
		MethodConstructorOverload c = new MethodConstructorOverload(0.563);
		MethodConstructorOverload t = new MethodConstructorOverload(3.0, 4.0, 5.0);
	
		System.out.println("Area of the Rectangle = "+r.area(2.5,4.0));
		System.out.println("Area of the Circle = "+c.area(0.694));
		System.out.println("Area of the Triangle = "+t.area(3.0, 4.0, 5.0));
		
	}
} 
	
	
