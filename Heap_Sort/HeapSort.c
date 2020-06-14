#include <stdio.h>

#define LeftChild( i ) (2 * ( i ) + 1)
#define MAX 60

void Swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void PercDown(int arr[], int i, int size)
{
    int child, temp;
    
    for(temp = arr[i]; LeftChild(i) < size; i = child)
    {
        child = LeftChild(i);

        if(child != (size - 1) && arr[child + 1] > arr[child])
            ++child;
        if(temp < arr[child])
            arr[i] = arr[child];
        else
            break;
    }
    arr[i] = temp;
}

void HeapSort(int arr[], int size)
{
    int i;

    for(i = size / 2 - 1; i >= 0; --i)
        PercDown(arr, i, size);
    
    for(i = size - 1; i > 0; --i)
    {
        Swap(&arr[0], &arr[i]);
        PercDown(arr, 0, i);    
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

    printf("\n\t---HEAP SORT---\n");

    printf("Enter the size of array(max %d): ", MAX);
    scanf("%d", &size);

    if(size > MAX)
    {
        printf("\nEntered size is greater than %d\n", MAX);
        return 0;
    }

    printf("\nEnter the elements in the array: ");

    for(i = 0; i < size; ++i)
        scanf("%d", &arr[i]);
    
    printf("\nElements in the array : ");
    
    for(i = 0; i < size; ++i)
        printf("%d ", arr[i]);

    HeapSort(arr, size);

    printf("\nElements in ascending order:\n");
    Display(arr, size);

    return 0;
}
