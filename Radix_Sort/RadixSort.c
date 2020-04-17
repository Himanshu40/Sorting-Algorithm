#include <stdio.h>

#define MAX 20

int Max(int arr[], int size)
{
    int i, max;

    max = arr[0];

    for(i = 1; i < size; ++i)
        if(max < arr[i])
            max = arr[i];

    return max;
}

void CountSort(int arr[], int size, int place)
{
    int i, output[size], count[10] = {0};

    for(i = 0; i < size; i++)                   // Evaluate count of elements
        count[(arr[i] / place) % 10]++; 

    for(i = 1; i < 10; ++i)                     // Evaluate cumulative frequency of count
        count[i] += count[i - 1];

    for(i = size - 1; i >= 0; --i)              // Place the elements in sorted order
    {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    for(i = 0; i < size; ++i)
        arr[i] = output[i];
}

void RadixSort(int arr[], int size)
{
    int place, maxElement;

    maxElement = Max(arr, size);

    for(place = 1; (maxElement / place) > 0; place *= 10)
        CountSort(arr, size, place);
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

    printf("\n\t---RADIX SORT---\n");

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

    RadixSort(arr, size);

    printf("\nElements in ascending order:\n");
    Display(arr, size);

    return 0;
}