import java.util.*;
class Staff
{
    String ID, Name, Phone;
    double Salary;
    Staff()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Name of the Staff Member: ");
        Name = sc.nextLine();
        System.out.println("Enter the Staff ID of the Staff Member: ");
        ID = sc.nextLine();
        System.out.println("Enter the Phone Number of the Staff Member: ");           
        Phone = sc.nextLine();
        System.out.println("Enter the Salary of the Staff Member: ");  
        Salary = sc.nextFloat();           
    }    
    void StaffDispay()
    {
        System.out.println("=======STAFF DETAILS=======");
        System.out.println("  Name: " +Name);
        System.out.println("    ID: " +ID);
        System.out.println(" Phone: " +Phone);
        System.out.println("Salary: " +Salary);
    }
}
class Teaching extends Staff
{
    String Domain;
    String Publications[] = new String[20];
    int i;
    static int n; 
    Teaching()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Domain of Teaching: ");
        Domain = sc.nextLine();              
        System.out.println("Enter the number of publications by the Teaching Faculty member: ");
        String Pnum = sc.nextLine();
        n = Integer.parseInt(Pnum);
        System.out.println("Enter the Names of the Publications:");
        for(i=0;i<n;i++)
        Publications[i] = sc.nextLine();        
    }
    void TeachDisplay()
    {
        System.out.println("Domain: " +Domain);
        System.out.println("Number of Publications: " +n);
        System.out.println("Publications: ");
        for(i=0;i<n;i++)
        System.out.println((i+1)+". "+Publications[i]);
    }        
}
class Technical extends Staff
{
    static int n; int i;
    String skills[] = new String[20];
    Technical()
    {
        Scanner sc = new Scanner(System.in);              
        System.out.println("Enter the number of skills possessed by the Technical Team member: ");
        String snum = sc.nextLine();
        n = Integer.parseInt(snum);
        System.out.println("Enter the Skills: ");
        for(i=0;i<n;i++)
        skills[i] = sc.nextLine();
    }
    void TechDisplay()
    {
        System.out.print("Number of skills: " +n);
        System.out.println("Skills: ");
        for(i=0;i<n;i++)
        System.out.println((i+1)+". "+skills[i]);
    }        
}
class Contract extends Staff
{
    int period;
    Contract()
    {
        Scanner sc = new Scanner(System.in);              
        System.out.println("Enter the contract period of the Staff Member in months: ");
        period = sc.nextInt();
    }
    void ContractDisplay()
    {
        System.out.println("Contract Period: "+period);
    }
}
class Inheritance
{
    public static void main(String args[])
    {
    Scanner sc = new Scanner(System.in); 
    System.out.println("1. Teaching Staff\n2. Technical Staff\n3. Contract Basis Staff\nEnter your choice (1,2,3):");
    int c = sc.nextInt(); 
    int j, p;
    switch(c)
    {
        case 1:
        {
            System.out.println("Enter the number of entries: ");
            p = sc.nextInt();
            for(j=0;j<p;j++)
            {
                Teaching t = new Teaching();
                t.StaffDispay();
                t.TeachDisplay();
            }
            break;
        }
        case 2:
        {
            System.out.println("Enter the number of entries: ");
            p = sc.nextInt();
            for(j=0;j<p;j++)
            {
                Technical t = new Technical();
                t.StaffDispay();
                t.TechDisplay();
            }
            break;
        }
        case 3:
        {
            System.out.println("Enter the number of entries: ");
            p = sc.nextInt();
            for(j=0;j<p;j++)
            {
                Contract t = new Contract();
                t.StaffDispay();
                t.ContractDisplay();
            }
            break;
        }
        
        default:
        System.out.println("Invalid choice!");
    }    
    }
}