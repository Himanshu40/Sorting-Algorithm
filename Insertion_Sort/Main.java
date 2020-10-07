// Insertion sort algorithm

import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

class Sort
{
    void InsertionSort(int arr[])
    {
        int j, temp;
        
        for (int i = 0; i < arr.length ; ++i)
        {
            temp = arr[i];
            
            for (j = i; j > 0 && arr[j - 1] > temp; --j)
            {
                arr[j] = arr[j - 1];
            }
            arr[j] = temp;
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

        System.out.println("\n\t---INSERTION SORT---");
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

        obj.InsertionSort(arr);

        System.out.println("\nElements in ascending order : ");
        obj.Display(arr);
    }
}