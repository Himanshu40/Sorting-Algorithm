#include <stdio.h>

#define MAX 20
#define Cutoff (3)

void Swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x   = *y;
    *y   = temp;
}

int Median3(int arr[], int left, int right)
{
    int center = (left + right) / 2;

    if(arr[left] > arr[center])
        Swap(&arr[left], &arr[center]);
    if(arr[left] > arr[right])
        Swap(&arr[left], &arr[right]);
    if(arr[center] > arr[right])
        Swap(&arr[center], &arr[right]);

    Swap(&arr[center], &arr[right - 1]);

    return arr[right - 1];
}

void InsertionSort(int *arr, int arrSize)          
{
    int i, j, key;

    for(i = 1; i < arrSize; ++i)
    {
        key = *(arr + i);
        j   = i - 1;

        while((j >= 0) && (*(arr + j) > key))
        {
            *(arr + (j + 1)) = *(arr + j);
            --j;
        }

        *(arr + (j + 1)) = key; 
    }
}

void QSort(int arr[], int left, int right)
{
    int i, j, pivot;

    if((left + Cutoff) <= right)
    {
        pivot = Median3(arr, left, right);
        i = left;
        j = right - 1;

        for( ; ; )
        {
            while(arr[++i] < pivot){}
            while(arr[--j] > pivot){}

            if(i < j)
                Swap(&arr[i], &arr[j]);
            else
                break;
        }
        Swap(&arr[i], &arr[right - 1]);

        QSort(arr, left, i - 1);
        QSort(arr, i + 1, right);
    }
    else
        InsertionSort(&arr[left], right - left + 1);
}

void display(int arr[], int arrSize)
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
        printf("\nEntered size is greater than %d\n", MAX);
        return 0;
    }

    printf("\nEnter the elements in the array: ");

    for(i = 0; i < size; ++i)
        scanf("%d", &arr[i]);

    printf("\n---QUICK SORT---\n");
    
    QSort(arr, 0, size - 1);

    printf("\nElements in ascending order:\n");
    display(arr, size);

    return 0;
}