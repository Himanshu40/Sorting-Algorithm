//code for CyclicSort
import java.util.*;
public class CyclicSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i<n; i++) {
             arr[i] = sc.nextInt();
        }
        sort(arr);
        System.out.println(Arrays.toString(arr)); // using toString method from Array class to print the sorted array. you can also use a simple for loop for this.
    }

    static void sort(int[] arr) {
        int i = 0;
        while (i < arr.length) {
            int correct = arr[i] - 1;
            if (arr[i] != arr[correct]) {
                swap(arr, i , correct);
            } else {
                i++;
            }
        }
    }

    //method for swapping the first and seecond element
    static void swap(int[] arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }


}
