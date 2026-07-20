import java.util.*;
class SuperVehicle
{
	int wheels;
	float mileage, fuelcapacity;
	SuperVehicle(int n)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the mileage of the vehicle: ");
		mileage = sc.nextFloat();
		System.out.println("Enter the Fuel Tank Capacity of the Vehicle: ");
		fuelcapacity = sc.nextFloat();
		wheels = n;
	}
	void Display()
	{
		System.out.println("Mileage of the vehicle: "+mileage);
		System.out.println("Fuel Tank Capacity of the vehicle: "+fuelcapacity);
	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int w;
		System.out.println("Enter the number of wheels on the vehicle (2,4): ");
		w = sc.nextInt();
		switch(w)
		{
			case 2:
			{
				TwoWheeler o = new TwoWheeler();
				o.Display2();
				break;
			}
			case 4:
			{
				FourWheeler o = new FourWheeler();
				o.Display4();
				break;
			}
			default:
			System.out.println("Invalid Choice! Program Terminates"); System.exit(0);
		}
	}		
}
class TwoWheeler extends SuperVehicle
{
	TwoWheeler()
	{
		super(2);
	}
	void Display2()
	{
		super.Display();
		System.out.println("Number of Wheels on the vehicle: "+super.wheels);
	}
}
class FourWheeler extends SuperVehicle
{
	FourWheeler()
	{
		super(4);
	}
	void Display4()
	{
		super.Display();
		System.out.println("Number of Wheels on the vehicle: "+super.wheels);
	}
}

        		
		
		
	
