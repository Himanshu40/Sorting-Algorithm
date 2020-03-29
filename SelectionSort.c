#include <stdio.h>

#define MAX 10

//Unstable Selection Sort
void SelectionSort(int *arr, int arrSize)
{
    int i, j, min, temp;

    for(i = 0; i < arrSize-1; ++i)
    {
        min = i;
        
        for(j = i + 1; j < arrSize; ++j)
            if(*(arr + j) < *(arr + min))
                min = j;

        temp = *(arr + min);
        *(arr + min) = *(arr + i);
        *(arr + i) = temp;
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

    printf("\n---SELECTION SORT---\n");
    
    SelectionSort(arr, size);

    printf("\nElements in ascending order:\n");
    display(arr, size);

    return 0;
}