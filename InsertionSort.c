#include <stdio.h>

#define MAX 10

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

void display(int *arr, int arrSize)
{
    int i;

    for(i = 0; i < arrSize; ++i)
        printf("%d ", *(arr + i));

    printf("\n");
}

int main()
{
    int arr[MAX];
    int size;
    int i;

    printf("Enter the size of array(max 10): ");
    scanf("%d", &size);

    if(size >= 10)
    {
        printf("\nEntered size is greater than 10\n");
        return 0;
    }

    printf("\nEnter the elements in the array: ");

    for(i = 0; i < size; ++i)
        scanf("%d", &arr[i]);

    printf("\n---INSERTION SORT---\n");
    
    InsertionSort(arr, size);

    printf("\nElements in ascending order:\n");
    display(arr, size);

    return 0;
}