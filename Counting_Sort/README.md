### COUNTING SORT

- [Counting Sort](https://en.wikipedia.org/wiki/Counting_sort) operates by counting the number of objects that possess distinct key values, and applying prefix sum on those counts to determine the positions of each key value in the output sequence

<p align="center">
Counting sort works by iterating through the input, counting the number of times each item occurs, and using those counts to compute an item's index in the final, sorted array.
Counting sort only works when the range of potential items in the input is known ahead of time.
</p>

### COMPLEXITY

```
Time complexity:    O(n)
Space Complexity:   O(n)
Worst case:         O(n)
Best Case:          O(n)
Average Case:       O(n)
```

### Test

##### C

1. To compile(Here _run_ is the name of executable file of _Counting Sort_)

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Counting_Sort$
$ gcc -o run CountingSort.c
```

2. To run

```
chandrakant@chandrakant-ASUS:~/Chandrakant/Sorting-Algorithm/Counting_Sort$
$./run
```

3. Output of Bucket Sort

```
-----Bucket Sort-----
Unsorted: [4,8,4,2,9,9,6,2,9]
Sorted: [2,2,4,4,6,8,9,9,9]
```
