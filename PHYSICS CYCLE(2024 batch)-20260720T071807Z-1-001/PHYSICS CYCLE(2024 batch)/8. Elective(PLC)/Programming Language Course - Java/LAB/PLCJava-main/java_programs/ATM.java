import java.util.*;
class ATM 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        double bal = 0.0;
        while(true)
        {
            System.out.println("1.Withdraw\n2.Deposit\n3.Check Account Balance\n4.Exit\nEnter your choice(1,2,3,4): ");
            int choice = sc.nextInt();
            switch(choice)
            {
                case 1: 
                {
                    if(bal==0)
                    System.out.println("Account Balance is nil. Withdrawal not possible. ");
                    else
                    {
                        System.out.println("Enter amount to withdraw in INR: ");
                        double amt = sc.nextDouble();
                        bal -= amt;
                        System.out.println("INR "+amt+" has been debited from your account.");
                    }
                break;
                }
                case 2:
                {
                    System.out.println("Enter the amount to be deposited: ");
                    double amt = sc.nextDouble();
                    bal +=amt; 
                    System.out.println("INR "+amt+" has been credited to your account.");break;
                }
                case 3:
                {
                    System.out.println("Account Balance: INR "+bal); break;
                }
                case 4:
                {
                    System.out.println("Thank you for your cooperation. Exit underway.");
                    System.exit(0); break;
                }            
                default:
                {
                    System.out.println("Wrong Input! Please input from the choices given. "); 
                            
                }
            }
        }     
        
    }    
}
