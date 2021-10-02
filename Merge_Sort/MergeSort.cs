using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MergeSort
{
    class Program
    {
        static int[] MergeSort(int[] arr)
        {
            int[] left;
            int[] right;
            int[] result = new int[arr.Length];

            if (arr.Length <= 1)
                return arr;

            int mid = arr.Length / 2;

            left = new int[mid];
            if (arr.Length % 2 == 0)
                right = new int[mid];
            else
                right = new int[mid + 1];

            for (int i = 0; i < left.Length; i++)
            {
                left[i] = arr[i];
            }

            for (int j = 0; j < right.Length; j++)
            {
                right[j] = arr[mid + j];
            }

            left = MergeSort(left);
            right = MergeSort(right);
            result = Merge(left, right);
            return result;
        }

        static int[] Merge(int[] left, int[] right)
        {
            int[] result = new int[left.Length + right.Length];
            int leftIndex = 0, rightIndex = 0, resultIndex = 0;

            //While either array still has an element
            while (leftIndex < left.Length || rightIndex < right.Length)
            {
                //If both arrays have elements
                if (leftIndex < left.Length && rightIndex < right.Length)
                {
                    if (left[leftIndex] <= right[rightIndex])
                    {
                        result[resultIndex] = left[leftIndex];
                        leftIndex++;
                        resultIndex++;
                    }
                    else
                    {
                        result[resultIndex] = right[rightIndex];
                        rightIndex++;
                        resultIndex++;
                    }
                }
                //If only the left array has elements
                else if (leftIndex < left.Length)
                {
                    result[resultIndex] = left[leftIndex];
                    leftIndex++;
                    resultIndex++;
                }
                // If only the right array has elements
                else if (rightIndex < right.Length)
                {
                    result[resultIndex] = right[rightIndex];
                    rightIndex++;
                    resultIndex++;
                }
            }
            return result;
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Enter elements of the array");
            int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            int[] result = MergeSort(arr);
            Console.WriteLine("After merge sort, the array is");
            foreach (int item in result)
            {
                Console.Write(item + " ");
            }

            Console.Read();
        }
    }
}
