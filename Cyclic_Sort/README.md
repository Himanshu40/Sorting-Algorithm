## Cyclic Sort

Cycle sort is an in-place, unstable sorting algorithm, a comparison sort that is theoretically optimal in terms of the total number of writes to the original array, unlike any other in-place sorting algorithm. It is based on the idea that the permutation to be sorted can be factored into cycles, which can individually be rotated to give a sorted result.


|                             |                            |
| --------------------------- | -------------------------- |
| Worst case performance      | O(n^2)                     |
| Best case performance       | O(n^2)                     |
| Average case performance    | O(n^2)                     |
| Worst case space complexity | O(n) total, O(1) auxiliary |

##### C++

1. To Compile

```
ank1taS@mx:~/Desktop/Sorting-Algorithm/Cyclic_Sort
$ g++ SelectionSort.cpp -o run
```

2. To run

```
ank1taS@mx:~/Desktop/Sorting-Algorithm/Cyclic_Sort
$ ./run
```

3.  Output of Cyclic Sort

```
	---Cyclic Sort---
Enter the number of elements: 7
Enter elements : 99 1 334 -9 4 3 12
Array before Sorting:  99 1 334 -9 4 3 12
Array after Sorting : -9 1 3 4 12 99 334
```
