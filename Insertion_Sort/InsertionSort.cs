using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InsertionSort
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Enter elements of the array");
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            Console.WriteLine("After sorting, the array is");
            int[] resArr = InsertionSort(arr);
            foreach (int item in resArr)
            {
                Console.Write(item + " ");
            }

            Console.Read();
        }

        static int[] InsertionSort(int[] arr)
        {
            for (int i = 1; i < arr.Length; i++)
            {
                int temp = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > temp)
                {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = temp;
            }
            return arr;
        }
    }
}