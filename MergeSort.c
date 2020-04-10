#include <stdio.h>

#define MAX 50

void merge(int arr[], int left, int mid, int right)
{
    int n1, n2;
    int i, j, k;

    n1 = mid - left + 1;
    n2 = right - mid;

    int L[n1], R[n2];

    for(i = 0; i < n1; ++i)
        L[i] = arr[left + i];

    for(j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
            arr[k] = L[i++];
        else
            arr[k] = R[j++];
        k++;
    }

    while(i < n1)
        arr[k++] = L[i++];

    while(j < n2)
        arr[k++] = R[j++];
}

void MergeSort(int arr[], int left, int right)          
{
    int mid;

    if(left < right)
    {
        mid = left + (right - left)/2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void Display(int arr[], int arrSize)
{
    int i;

    for(i = 0; i < arrSize; ++i)
        printf("%d ", arr[i]);

    printf("\n");
}

int main()
{
    int arr[MAX];
    int size;
    int i;

    printf("Enter the size of array(max %d): ", MAX);
    scanf("%d", &size);

    if(size >= MAX)
    {
        printf("\nEntered size is greater than or equal to %d\n", MAX);
        return 0;
    }

    printf("\nEnter the elements in the array: ");

    for(i = 0; i < size; ++i)
        scanf("%d", &arr[i]);

    printf("\n---MERGE SORT---\n");
    
    MergeSort(arr, 0, size - 1);

    printf("\nElements in ascending order:\n");
    Display(arr, size);

    return 0;
}