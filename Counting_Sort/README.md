### COUNTING SORT

+ [Counting Sort](https://en.wikipedia.org/wiki/Counting_sort) counting sort is an algorithm for sorting a collection of objects according to keys that are small positive integers; that is, it is an integer sorting algorithm.
+ It operates by counting the number of objects that possess distinct key values, and applying prefix sum on those counts to determine the positions of each key value in the output sequence.
### EXAMPLE

<p align="center">
	<img src="https://3.bp.blogspot.com/-jJchly1BkTc/WLGqCFDdvCI/AAAAAAAAAHA/luljAlz2ptMndIZNH0KLTTuQMNsfzDeFQCLcB/s1600/CSortUpdatedStepI.gif">
</p>

<p align="center">
Counting sort can be extended to work for negative inputs also.
</p>

### COMPLEXITY
```
Time complexity:    O(N+K)
Space Complexity:   O(K)
Worst case:         when data is skewed and range is large
Best Case:          When all elements are same
Average Case:       O(N+K) (N & K equally dominant)

where:

N is the number of elements
K is the range of elements (K = largest element - smallest element)
```

### Test

##### C

1. To compile(Here *run* is the name of executable file of *Counting Sort*)

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Counting_Sort$
$ gcc -o run CountingSort.c 
```

2. To run

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Counting_Sort$ 
$./run
```

3. Output of Counting Sort

```
-----Counting Sort-----
Unsorted: [0, 3, 2, 3, 3, 0, 5, 2, 3]
Sorted: [0, 0, 2, 2, 3, 3, 3, 3, 5
```
##### C++
1. To compile(Here *run* is the name of executable file of *Counting Sort*)

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Counting_Sort$
$ g++ -o run CountingSort.cpp 
```
2. To run

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Counting_Sort$ 
$./run
```
3. Output of Counting Sort

```
3. Output of Counting Sort
Enter number of elements : 5
Enter elements : 7
10
5
2
40
Sorted : 2 5 7 10 40
```
##### JAVA
1. To compile
```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Counting_Sort$ javac CountingSort.java 
```
2. To Run
```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Counting_Sort$ java Main
```
3. output
```
Number of elements in the array : 
5
Elements of the array : 
7
10
5
2
40 
Sorted Array using counting sort : 
2 5 7 10 40 
```