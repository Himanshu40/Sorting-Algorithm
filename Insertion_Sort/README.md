### INSERTION SORT

[Insertion Sort](https://en.wikipedia.org/wiki/Insertion_sort) is like finding each element from the input elements through each iteration to place it in correct position. It is one of the simplest sorting algorithm. Insertion sort consists of ```N - 1 passes```. For pass ```P = 1``` through ```N - 1```, insertion sort ensures that the elements in positions ```0``` through ```P``` are in sorted order. Insertion Sort makes use of fact that the elements in positions ```0``` through ```P - 1``` are already known to be in sorted order.

## EXAMPLE

<p align="center">
    <img src="https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif">
</p>

<p align="center">
The partial sorted list (black) initially contains only the first element in the list. With each iteration one element (red) is removed from the "not yet checked for order" input data and inserted in-place into the sorted list.
</p>

### COMPLEXITY

| **Insertion Sort Performance** | **Comparisons & Swaps**            |
| ------------------------------ | :--------------------------------: |
| Worst-Case Performance         | ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) comparisons, ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) swaps |
| Best-Case Performance          | ![O(n)](https://render.githubusercontent.com/render/math?math=O(n)) comparisons, ![O(1)](https://render.githubusercontent.com/render/math?math=O(1)) swaps |
| Average-Case Performance       | ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) comparisons, ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) swaps |
| Worst-Case Space Complexity    | ![O(n)](https://render.githubusercontent.com/render/math?math=O(n)) total, ![O(1)](https://render.githubusercontent.com/render/math?math=O(1)) auxiliary |

### Test

##### C

1. To compile(Here *run* is the name of executable file of *Insertion Sort*)

```
h1manshu@asus:~/Sorting-Algorithm/Insertion_Sort
$ gcc -o run InsertionSort.c 
```

2. To run

```
h1manshu@asus:~/Sorting-Algorithm/Insertion_Sort
$ ./run 
```

3. Output of Insertion Sort

```
	---INSERTION SORT---
Enter the size of array(max 20): 11

Enter the elements in the array: 21
34
11
9
56
32
78
31
27
15
23

Elements in the array : 21 34 11 9 56 32 78 31 27 15 23 
Elements in ascending order:
9 11 15 21 23 27 31 32 34 56 78
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

3. Output of Insertion Sort

```
        ---INSERTION SORT---
Enter the size of array = 10
Enter elements -
1 : 11
2 : 55
3 : 44
4 : 22
5 : 77
6 : 11
7 : 11
8 : 88
9 : 44
10 : 33
Elements in the array :
11  55  44  22  77  11  11  88  44  33
Elements in ascending order :
11  11  11  22  33  44  44  55  77  88
```


### CODE IMPLEMENTATION

[InsertionSort.c](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/Insertion_Sort/InsertionSort.c)