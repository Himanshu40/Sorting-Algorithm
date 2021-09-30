### pigeonhole SORT

+ [pigeonhole Sort](https://en.wikipedia.org/wiki/Pigeonhole_sort) is a sorting algorithm that is suitable for sorting lists of elements where the number of elements (n) and the length of the range of possible key values (N) are approximately the same.
+  It requires O(n + N) time. It is similar to counting sort, but differs in that it "moves items twice: once to the bucket array and again to the final destination.counting sort builds an auxiliary array then uses the array to compute each item's final destination and move the item there.
### EXAMPLE

<p align="center">
	<img height= '250px' width='300px'src="https://media.geeksforgeeks.org/wp-content/uploads/countingsort.png ">
</p>

### COMPLEXITY
```
Worst complexity: n+2^k
Average complexity: n+2^k
Space complexity: 2^k
Stable: Yes
Class: Non-comparison sort
```

### Test

##### C

1. To compile(Here *run* is the name of executable file of *pigeonhole Sort*)

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/pigeonhole_Sort$
$ gcc -o run pigeonhole_sort.c 
```

2. To run

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/pigeonhole_Sort$ 
$./run
```

3. Output of pigeonhole Sort

```
-----pigeonhole Sort-----
Unsorted: [0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68]
Sorted: [0.12, 0.17, 0.21, 0.23, 0.26, 0.39, 0.68, 0.72, 0.78, 0.94]
```
##### Python
```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/pigeonhole_Sort$ python3 pigehole_sort.py 
Before Sorting:
8 3 2 7 4 6 8 
Sorted order is :  2 3 4 6 7 8 8 
```
