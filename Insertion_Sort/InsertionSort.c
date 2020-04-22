#include <stdio.h>

#define MAX 20

void InsertionSort(int arr[], int arrSize)          
{
    int i, j, temp;

    for(i = 1; i < arrSize; ++i)
    {
        temp = arr[i];

        for(j = i; j > 0 && arr[j - 1] > temp; --j)
            arr[j] = arr[j - 1];
        
        arr[j] = temp;
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

    printf("\n\t---INSERTION SORT---\n");

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
    
    InsertionSort(arr, size);

    printf("\nElements in ascending order:\n");
    Display(arr, size);

    return 0;
}