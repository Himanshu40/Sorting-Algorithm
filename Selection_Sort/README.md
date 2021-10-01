### Selection Sort

[Selection Sort](https://en.wikipedia.org/wiki/Selection_sort) is an **in-place** sorting algorithm. This algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from the unsorted part and putting it at the beginning. In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. The algorithm maintains two subarrays in a given array.

1. The subarray which is already sorted.
2. Remaining subarray which is unsorted.

### EXAMPLE

<p align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif">
</p>

<p align="center">
Red is current minimum. Yellow is sorted list. Blue is current item.
</p>

### COMPLEXITY

| **Selection Sort Performance** | **Comparisons & Swaps**            |
| ------------------------------ | :--------------------------------: |
| Worst-Case Performance         | ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) comparisons, ![O(n)](https://render.githubusercontent.com/render/math?math=O(n)) swaps |
| Best-Case Performance          | ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) comparisons, ![O(n)](https://render.githubusercontent.com/render/math?math=O(n)) swaps |
| Average-Case Performance       | ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) comparisons, ![O(n)](https://render.githubusercontent.com/render/math?math=O(n)) swaps |
| Worst-Case Space Complexity    | ![O(1)](https://render.githubusercontent.com/render/math?math=O(1)) auxiliary |

### Test

##### C

1. To compile(Here *run* is the name of executable file of *Selection Sort*)

```
h1manshu@asus:~/Sorting-Algorithm/Selection_Sort
$ gcc -o run SelectionSort.c 
```

2. To run

```
h1manshu@asus:~/Sorting-Algorithm/Selection_Sort
$ ./run 
```

3. Output of Selection Sort

```
	---SELECTION SORT---
Enter the size of array(max 20): 10

Enter the elements in the array: 4
3
6
7
8
1
2
9
0
5

Elements in the array : 4 3 6 7 8 1 2 9 0 5 
Elements in ascending order:
0 1 2 3 4 5 6 7 8 9 
```

##### JAVA

1. To Compile

```
asus@LAPTOP-GOS5S0I0 MINGW64 
$ javac Main.java
```

2. To run

```
asus@LAPTOP-GOS5S0I0 MINGW64 
$ java Main
```

3.  Output of Selection Sort
```
        ---SELECTION SORT---
Enter the size of array = 10
Enter elements -
1 : 11
2 : 55
3 : 66
4 : 44
5 : 88
6 : 44
7 : 66
8 : 22
9 : 33
10 : 77
Elements in the array :
11  55  66  44  88  44  66  22  33  77
Elements in ascending order :
11  22  33  44  44  55  66  66  77  88
```

##### C++

1. To Compile

```
ank1taS@mx:~/Desktop/Sorting-Algorithm/Selection_Sort
$ g++ SelectionSort.cpp -o run
```

2. To run

```
ank1taS@mx:~/Desktop/Sorting-Algorithm/Selection_Sort
$ ./run
```

3.  Output of Selection Sort
```
	---SELECTION SORT---
Enter size :10
Enter the elements in the array: 11
Enter the elements in the array: 55
Enter the elements in the array: 66
Enter the elements in the array: 44
Enter the elements in the array: 88
Enter the elements in the array: 44
Enter the elements in the array: 66
Enter the elements in the array: 22
Enter the elements in the array: 33
Enter the elements in the array: 77
Elements in the array : 
11 55 66 44 88 44 66 22 33 77 
Elements in ascending order
11 22 33 44 44 55 66 66 77 88 
```


### CODE IMPLEMENTATION

##### C

[SelectionSort.c](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Selection_Sort/SelectionSort.c)

##### Java

[Main.java](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Selection_Sort/Main.java)

##### C++

[SelectionSort.cpp](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Selection_Sort/SelectionSort.cpp)
