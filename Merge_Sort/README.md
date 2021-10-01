### MERGE SORT

[Merge Sort](https://en.wikipedia.org/wiki/Merge_sort) works on the basis of [Divide and Conquer algorithm](https://en.wikipedia.org/wiki/Divide_and_conquer_algorithm). The Merge Sort Algorithm works as follows:

1. Divide the unsorted list into n sublists, each containing one element (a list of one element is considered sorted).
2. Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining. This will be the sorted list.

### EXAMPLE

<p align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/cc/Merge-sort-example-300px.gif/220px-Merge-sort-example-300px.gif">
</p>

<p align="center">
First divide the list into the smallest unit (1 element), then compare each element with the adjacent list to sort and merge the two adjacent lists. Finally all the elements are sorted and merged.
</p>

### COMPLEXITY

| **Merge Sort Performance**  |                                                                                                                       **Comparisons & Swaps**                                                                                                                       |
| --------------------------- | :-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| Worst-Case Performance      |                                                                                        ![O(n log n)](<https://render.githubusercontent.com/render/math?math=O(n%20log%20n)>)                                                                                        |
| Best-Case Performance       |                                        ![O(n log n)](<https://render.githubusercontent.com/render/math?math=O(n%20log%20n)>) typical, ![O(n)](<https://render.githubusercontent.com/render/math?math=O(n)>) natural variant                                         |
| Average-Case Performace     |                                                                                        ![O(n log n)](<https://render.githubusercontent.com/render/math?math=O(n%20log%20n)>)                                                                                        |
| Worst-Case Space Complexity | ![O(n)](<https://render.githubusercontent.com/render/math?math=O(n)>) total with ![O(n)](<https://render.githubusercontent.com/render/math?math=O(n)>) auxiliary, ![O(1)](<https://render.githubusercontent.com/render/math?math=O(1)>) auxiliary with linked lists |

### Test

1. To compile(Here _run_ is the name of executable file of _Merge Sort_)

```
h1manshu@asus:~/Sorting-Algorithm/Merge_Sort
$ gcc -o run MergeSort.c
```

2. To run

```
h1manshu@asus:~/Sorting-Algorithm/Merge_Sort
$ ./run
```

3. Output of Merge Sort

```
	---MERGE SORT---
Enter the size of array(max 50): 15

Enter the elements in the array: 78
36
45
72
16
28
39
46
51
44
77
23
80
47
57

Elements in the array : 78 36 45 72 16 28 39 46 51 44 77 23 80 47 57
Elements in ascending order:
16 23 28 36 39 44 45 46 47 51 57 72 77 78 80
```

##### C++

1. To Compile

```
ank1taS@mx:~/Desktop/Sorting-Algorithm/Merge_Sort
$ g++ MergeSort.cpp -o run
```

2. To run

```
ank1taS@mx:~/Desktop/Sorting-Algorithm/Merge_Sort
$ ./run
```

3.  Output of Selection Sort

```
	---Merge Sort---
Enter the number of elements: 7
Enter elements : 99 1 334 -9 4 3 12
Array before Sorting:  99 1 334 -9 4 3 12
Array after Sorting : -9 1 3 4 12 99 334
```

##### JAVA

1. To Compile

```
asus@LAPTOP-GOS5S0I0 MINGW64
$ javac MergeSort.java
```

2. To run

```
asus@LAPTOP-GOS5S0I0 MINGW64
$ java MergeSort
```

3.  Output of Merge Sort

```
        ---Merge SORT---
Enter the number of elements: 7
Enter elements : 90 -3 89 2 1 3 44
Array before sort: 90 -3 89 2 1 3 44
Array after sort: -3 1 2 3 44 89 90

```

### CODE IMPLEMENTATION

[MergeSort.c](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Merge_Sort/MergeSort.c)
[MergeSort.cpp](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Merge_Sort/MergeSort.cpp)
[MergeSort.java](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Merge_Sort/MergeSort.java)
