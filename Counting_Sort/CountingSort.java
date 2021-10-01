// Counting Sort Algorithm
// Note : Don't take n (array size) more than the memory that can be assinged in your System, generally n (array size) <= 1e7  

import java.util.Scanner;  

class Main
{
    public static void main (String[] args) 
    {
        int i, n, mini, maxi, range, j;
        mini = 1000000000;
        maxi = -1000000000;
        
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Number of elements in the array : ");
        n = sc.nextInt();
        System.out.println(n);
        
        int arr[] = new int[n];
        System.out.println("Elements of the array : ");
        
        for(i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
            
            if(maxi < arr[i])
                    maxi = arr[i]; // Use for storing the maximum number
                
            if(mini > arr[i])
                mini = arr[i]; // Use for storing the minimum number
                
            System.out.print(arr[i]+ " ");
        }
        
        System.out.println("\nSorted Array using counting sort : ");
        
        range = maxi - mini + 1; // use for storing the range of number occured in the array
        
        int count[] = new int[range];
        
        for(i=0; i<n; i++)
            count[arr[i] - mini]++; // frequency of each element (shifted number as there can be negative number so shifted by min) so each number is positive
        
        for(i=0; i<range; i++)
        {
            for(j=0; j<count[i]; j++)
            {
                System.out.print((i + mini)+" "); // again shifting as we have shifted the original number and then counted freq so instead of i, i + mini is present in the array 
            }
        }
        System.out.println();

        sc.close();
    }
}
