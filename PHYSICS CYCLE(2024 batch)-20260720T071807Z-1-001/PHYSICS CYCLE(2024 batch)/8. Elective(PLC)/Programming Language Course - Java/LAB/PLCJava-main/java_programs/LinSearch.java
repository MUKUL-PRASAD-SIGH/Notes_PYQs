import java.util.*;
class LinSearch 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n, f=0, i;
        System.out.println("Enter the number of elements in the array: ");
        n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of the array: ");
        for(i = 0;i<n;i++)
        arr[i] = sc.nextInt();   
        System.out.println("Enter the element to be searched: ");
        int ele = sc.nextInt();
        for(i=0;i<n;i++)
        {
            if(arr[i]==ele)
            {
                f=1; break;
            }
        }  
        if(f==1)
        System.out.println("The element "+ele+" is found at position"+(i+1)+".");
        sc.close();
    }
}
