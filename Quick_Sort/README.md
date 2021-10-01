### Quick Sort

[Quick Sort](https://en.wikipedia.org/wiki/Quicksort) is based on [Divide-and-conquer algorithm](https://en.wikipedia.org/wiki/Divide-and-conquer_algorithm) where it selects a *pivot* element from the array and then partition the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively. This can be done in-place, requiring small additional amounts of memory to perform the sorting.

### EXAMPLE

<p align="center">
	<img src="https://upload.wikimedia.org/wikipedia/commons/6/6a/Sorting_quicksort_anim.gif">
</p>

<p align="center">
The horizontal lines are pivot values.
</p>

### COMPLEXITY

| **Quick Sort Performance** | **Comparisons & Swaps**            |
| --------------------------- | :--------------------------------: |
| Worst-Case Performance      | ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) |
| Best-Case Performance       | ![O(n log n)](https://latex.codecogs.com/svg.image?O(n&space;log&space;n)) |
| Average-Case Performance    | ![O(n log n)](https://latex.codecogs.com/svg.image?O(n&space;log&space;n)) |
| Worst-Case Space Complexity | ![O(n)](https://render.githubusercontent.com/render/math?math=O(n)) total, ![O(1)](https://render.githubusercontent.com/render/math?math=O(1)) auxiliary |

### Test

##### C

1. To compile(Here *run* is the name of executable file of *Quick Sort*)

```
ank1taS@mx:~/Desktop/Sorting-Algorithm/Quick_Sort
$ gcc QuickSort.c -o run
```

2. To run

```
ank1taS@mx:~/Desktop/Sorting-Algorithm/Quick_Sort
$ ./run
```

3. Output of Quick Sort

```
	---QUICK SORT---
Enter the size of array(max 20): 10

Enter the elements in the array: 11
44
55
22
44
55
77
11
55
77

Elements in the array : 11 44 55 22 44 55 77 11 55 77 
Elements in ascending order:
11 11 22 44 44 55 55 55 77 77 
```
