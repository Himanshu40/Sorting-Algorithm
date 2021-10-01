def selectionSort(a):
    # Traverse through all the elements in array.
    for i in range(len(a)):
        
        # Finding the minimum element in remaining unsorted array.
        current_min = i
        for j in range(i+1,len(a)):
            # If any element is smaller then A[current_min] , updating current_min.
            if a[current_min] > a[j]:
                current_min = j
        
        # Swapping the found minimun element with the 
        # first element of remaining unsorted array.
        a[i], a[current_min] = a[current_min], a[i]
 
# Driver code to test above 
a = [8, 3, 2, 7, 4, 6, 8]

print("Before Sorting:")
for i in range(0, len(a)):
    print(a[i], end = ' ')
print()

print("After Sorting:") 
selectionSort(a)
for i in range(0, len(a)):
    print(a[i], end = ' ')
print()
