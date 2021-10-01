import java.util.Scanner;

public class MergeSort
{
   static void merge(int arr[] , int beg , int mid , int end)
    {
        int nl = mid - beg +1 , nr = end-mid;
        int leftArr[] = new int[nl];
        int rightArr[] = new int[nr];

        for (int i = 0; i < nl; i++) {
            leftArr[i] = arr[beg+i];
        }
        for (int i = 0; i < nr; i++) {
            rightArr[i] = arr[mid +1 + i];
        }

        int i=0 , j=0 , k=beg;
        while(i<nl && j<nr){
            if(leftArr[i] <= rightArr[j])
            {
                arr[k]=leftArr[i];
                i++;
                k++;
            }
            else{
                arr[k]=rightArr[j];
                j++;
                k++;
            }
        }

        while(i<nl){
            arr[k]=leftArr[i];
            i++;
            k++;
        }
        while(j<nr){
            arr[k]=rightArr[j];
            j++;
            k++;
        }

    }
    static void mergeSort(int [] arr, int beg , int end )
    {
        if(beg<end)
        {
            int mid = (beg + end) /2;
            mergeSort(arr,beg,mid);
            mergeSort(arr,mid+1,end);
            merge(arr,beg,mid,end);
        }
    }
    
    static void print(int arr[],int n)
    {

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();
        int arr[] = new int [n];
        System.out.print("Enter elements : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.print("Array before sort: ");
        print(arr,n);
        mergeSort(arr,0,n-1);
        System.out.print("Array after sort: ");
        print(arr,n);

    }
}
