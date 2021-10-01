### BUCKET SORT

+ [Bucket Sort](https://en.wikipedia.org/wiki/Bucket_sort) is a sorting algorithm that works by distributing the elements of an array into a number of buckets.
+ Each bucket is then sorted individually, either using a different sorting algorithm, or by recursively applying the bucket sorting algorithm.
### EXAMPLE

<p align="center">
	<img src="GifSrc/How_to_Bucket_Sort.gif">
</p>

<p align="center">
Bucket sort is mainly useful when input is uniformly distributed over a range.
</p>

### COMPLEXITY
```
Time complexity:    O(n + k)
Space Complexity:   O(n + k)
Worst case:         O(n²)
Best Case:          O(n + k)
Average Case:       O(n + n²/k + k), O(n) when k = Θ(n)
```

### Test

##### C

1. To compile(Here *run* is the name of executable file of *Bucket Sort*)

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Bucket_Sort$
$ gcc -o run bucket_sort.c 
```

2. To run

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Bucket_Sort$ 
$./run
```

3. Output of Bucket Sort

```
-----Bucket Sort-----
Unsorted: [0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68]
Sorted: [0.12, 0.17, 0.21, 0.23, 0.26, 0.39, 0.68, 0.72, 0.78, 0.94]
```
