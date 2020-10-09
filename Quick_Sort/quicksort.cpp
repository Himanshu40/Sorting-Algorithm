//C++ implementation of quick sort
#include <iostream> 
using namespace std;  
 
void swap(int* a, int* b)  //A function just to swap the number
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
 
int partition (int arr[], int low, int high)  //this function takes the last element as pivot and places the pivot at its correct position
{  
    int pivot = arr[high]; 
    int i = (low - 1);   
  
    for (int j = low; j <= high - 1; j++)  
    {  
        if (arr[j] <=pivot)  
        {  
            i++; 
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  

void quickSort(int arr[], int low, int high)  //this fucntion implements the quicksort
{  
    if (low >= high)  
        return;
     
       
        int pi = partition(arr, low, high);           
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
      
}  
  

void printArray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
 
int main()  
{  
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    quickSort(arr, 0, n - 1);  
    cout << "Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  
  
