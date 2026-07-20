import java.util.*;
class Largest
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int num, j;
        System.out.println("Enter the number of elements in the array: ");
        num = sc.nextInt();
        int arr[] = new int[num];
        System.out.println("Enter the elements of the integer array: ");
        for(j=0;j<num;j++)
        {
            arr[j] = sc.nextInt();
        }
        int max = arr[0];
        for(j=0;j<num;j++)
        {
            if(arr[j]>max)
            max = arr[j];
        }
        System.out.println("The largest number in the array is "+max);
        sc.close();
    }
}