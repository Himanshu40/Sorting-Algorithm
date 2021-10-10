## Cocktail Sort

Cocktail Sort is a variation of Bubble sort. The Bubble sort algorithm always traverses elements from left and moves the largest element to its correct position in first iteration and second largest in second iteration and so on. Cocktail Sort traverses through a given array in both directions alternatively.

<p align="center">
	![screen-gif](https://upload.wikimedia.org/wikipedia/commons/e/ef/Sorting_shaker_sort_anim.gif)
</p>

## Algorithm

1. The first stage loops through the array from left to right, just like the Bubble Sort. During the loop, adjacent items are compared and if value on the left is greater than the value on the right, then values are swapped. At the end of first iteration, largest number will reside at the end of the array.
2. The second stage loops through the array in opposite direction- starting from the item just before the most recently sorted item, and moving back to the start of the array. Here also, adjacent items are compared and are swapped if required.

|                             |                            |
| --------------------------- | -------------------------- |
| Worst case performance      | O(n * n)                 |
| Best case performance       | O(n )                    |
| Average case performance    | O(n * n)                 |
| Space complexity            | O(1)                     |