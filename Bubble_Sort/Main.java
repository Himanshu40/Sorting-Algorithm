// Bubble Sort programe

import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

class Sort
{
    void BubbleSort(int arr[])
    {
        int temp;
        boolean check;

        for (int i = 0; i < arr.length - 1; ++i)
        {
            check = false;

            for (int j = 0; j < arr.length - i - 1; ++j)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    check = true;
                }
            }
            if (!check)
            {
                break;
            }
        }
    }
    void Display(int arr[])
    {
        for(int i : arr)
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

        System.out.println("\n\t---BUBBLE SORT---");
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

        obj.BubbleSort(arr);

        System.out.println("\nElements in ascending order : ");
        obj.Display(arr);
    }
}