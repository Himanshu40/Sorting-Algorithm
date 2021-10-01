#include <iostream>
using namespace std;

void merge(int arr[] , int beg , int mid , int end)
{
    int nl = mid - beg +1 , nr = end-mid;
    int leftArr[nl] , rightArr[nr];
    
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

void mergeSort(int arr[] , int beg , int end )
{
    if(beg<end)
    {
        int mid = (beg + end) /2;
        mergeSort(arr,beg,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,beg,mid,end);
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
    int n ;
    cout << "Enter the number of elements: ";
    cin>>n;
    int * arr = new int [n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"Array before sort: ";
    print(arr,n);
    mergeSort(arr,0,n-1);
    cout<<"Array after sort: ";
    print(arr,n);    
    return 0;
}