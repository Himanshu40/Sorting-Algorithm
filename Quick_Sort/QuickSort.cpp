#include <iostream>

using namespace std;

void swap(int * a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        
        if (arr[j] < pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[] , int beg , int end )
{
    if(beg <end)
    {
        int pivotIndex = partition(arr,beg , end);
        quickSort(arr , beg , pivotIndex-1);
        quickSort(arr , pivotIndex+1 , end);
    }
}

void print(int arr[],int n)
{
    
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    int * arr = new int[n];
    cout<<"Enter elements : ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"Before Sorting: "; 
    print(arr,n); 
    quickSort(arr,0,n);
    cout<<"After Sorting: ";
    print(arr,n);    
    return 0;
}
