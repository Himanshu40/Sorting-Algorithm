import java.util.Scanner;

public class HeapSort
    {
        static public void sort(int arr[])
        {
            int n = arr.length;
            for (int i = n / 2 - 1; i >= 0; i--)
                heapify(arr, n, i);
            for (int i=n-1; i>=0; i--)
            {
                int temp = arr[0];
                arr[0] = arr[i];
                arr[i] = temp;
                heapify(arr, i, 0);
            }
        }
       static void heapify(int arr[], int n, int i)
        {
            int largest = i;
            int l = 2*i + 1;
            int r = 2*i + 2;
            if (l < n && arr[l] > arr[largest])
                largest = l;
            if (r < n && arr[r] > arr[largest])
                largest = r;
            if (largest != i)
            {
                int swap = arr[i];
                arr[i] = arr[largest];
                arr[largest] = swap;
                heapify(arr, n, largest);
            }
        }

        static void printArray(int arr[])
        {
            int n = arr.length;
            for (int i=0; i<n; ++i)
                System.out.print(arr[i]+" ");
            System.out.println();
        }


        public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter no of elements: ");
            int n = sc.nextInt();
            int arr[] = new int[n];
            System.out.print("Enter elements: ");
            for(int i=0 ; i<n ; i++)
                arr[i]=sc.nextInt();
            HeapSort ob = new HeapSort();
            System.out.print("Array before sort : ");
            printArray(arr);
            ob.sort(arr);

            System.out.print("Array after sort : ");
            printArray(arr);
        }
    }
