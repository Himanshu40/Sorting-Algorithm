#include <stdio.h>

#define MAX 20

//Optimized Bubble Sort
void BubbleSort(int arr[], int arrSize)          
{
    int i, j, check, temp;

    for(i = 0; i < arrSize-1; ++i)
    {
        check = 0;
        
        for(j = 0; j < arrSize-i-1; ++j)
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check = 1; 
            }

        if(!check)
            break;
    }
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
        printf("\nEntered size is greater than or equal to %d\n", MAX);
        return 0;
    }

    printf("\nEnter the elements in the array: ");

    for(i = 0; i < size; ++i)
        scanf("%d", &arr[i]);

    printf("\n---BUBBLE SORT---\n");
    
    BubbleSort(arr, size);

    printf("\nElements in ascending order:\n");
    display(arr, size);

    return 0;
}