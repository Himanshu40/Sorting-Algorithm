## Heap Sort

heapsort is a comparison-based sorting algorithm. Heapsort can be thought of as an improved selection sort: like selection sort, heapsort divides its input into a sorted and an unsorted region, and it iteratively shrinks the unsorted region by extracting the largest element from it and inserting it into the sorted region. Unlike selection sort, heapsort does not waste time with a linear-time scan of the unsorted region; rather, heap sort maintains the unsorted region in a heap data structure to more quickly find the largest element in each step.

<p align="center">
	<img src="https://en.wikipedia.org/wiki/Heapsort#/media/File:Sorting_heapsort_anim.gif">
</p>
http://en.wikipedia.org/wiki/Heapsort
|                             |                            |
| --------------------------- | -------------------------- |
| Worst case performance      | O(n log n)                 |
| Best case performance       | Omega(n), O(n log n)       |
| Average case performance    | O(n log n)                 |
| Worst case space complexity | O(n) total, O(1) auxiliary |
