import java.util.*;
class Student
{
	String USN, Name, Branch; float Percentage; long Phone;
	
	Student()
	{
	        Scanner sc = new Scanner(System.in);
		System.out.print("Enter Student USN: ");
		USN = sc.nextLine();
		System.out.print("Enter Student Name: ");
		Name = sc.nextLine();
		System.out.print("Enter the Branch of the Student: ");
		Branch = sc.nextLine();
		System.out.print("Enter the Phone number of the student: ");
		Phone = sc.nextLong();
		System.out.print("Enter the Percentage of the student: ");
		Percentage = sc.nextFloat();
	}
	void display()
	{
	        System.out.println("\nThe Student Details are: ");
		System.out.println("Student Name: "+Name);
		System.out.println("Student USN: "+USN);
		System.out.println("Branch: "+Branch);
		System.out.println("Student Contact: "+Phone);
		System.out.println("Score attained by student: "+Percentage+"%");
	}
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int n, i; 
		System.out.println("Enter the number of objects to be created: ");
		n = sc.nextInt();
		for(i=0;i<n;i++)
		{
		        Student s = new Student();
		        s.display();
		}
	}
}

	
