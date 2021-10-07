//Code
import java.util.*;
public class RecursiveBubbleSort {
	public static void main(String[] args) {
		Scanner scn=new Scanner(System.in);
		int[] arr=  {5,1,4,2,8};
		bubbleSort(arr,arr.length);
		System.out.println("Sorted Array Elements: ");
		System.out.println(Arrays.toString(arr));
	}

	private static void bubbleSort(int[] arr, int n) {
//		Base-case
		if(n==1) return;
		
//		// One pass of bubble sort. After
        // this pass, the largest element
        // is moved (or bubbled) to end.
		
		for(int i=0;i<n-1;i++) {
			if(arr[i]>arr[i+1]) {		
				int temp=arr[i];				// swap arr[i], arr[i+1]
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		bubbleSort(arr,n-1);					// Largest element is fixed,recur for remaining array
		
	}
}

//Dry-Run
//First Pass: 
//( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 
//( 1 5 4 2 8 ) –> ( 1 4 5 2 8 ), Swap since 5 > 4 
//( 1 4 5 2 8 ) –> ( 1 4 2 5 8 ), Swap since 5 > 2 
//( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
//Second Pass: 
//( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) 
//( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2 
//( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
//( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
//Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.
//Third Pass: 
//( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
//( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
//( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
//( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
