// selection sort algorithm

import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

class Sort
{
    // unstable Selection sort
    void selectionSort(int arr[])
    {
        int min, temp;
        
        for (int i = 0; i < arr.length - 1; ++i)
        {
            min = i;

            for (int j = i + 1; j < arr.length; ++j)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    } 
    
    void Display(int arr[])
    {
        for (int i : arr)
        {
            System.out.print(i + "  ");
        }
    }
}

class Main
{
    public static void main(String[] args)throws IOException
    {
        Sort obj = new Sort();
        BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("\n\t---SELECTION SORT---");
        System.out.print("Enter the size of array = ");
        int n = Integer.parseInt(buf.readLine());

        int[] arr = new int[n];
        System.out.println("Enter elements -");
        for(int i = 0; i < n ; ++i)
        {
            System.out.print((i + 1) +" : ");
            arr[i] = Integer.parseInt(buf.readLine());
        }

        System.out.println("Elements in the array : ");
        obj.Display(arr);

        obj.selectionSort(arr);

        System.out.println("\nElements in ascending order : ");
        obj.Display(arr);
    }
}
