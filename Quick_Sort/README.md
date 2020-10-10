## Quick Sort

[Quick Sort](https://en.wikipedia.org/wiki/Quicksort) is based on [Divide-and-conquer algorithm](https://en.wikipedia.org/wiki/Divide-and-conquer_algorithm) where it selects a *pivot* element from the array and then partition the other elements into two sub-arrays according to whether they are less than or greater than the pivot. The sub-arrays are then sorted recursively. This can be done in-place, requiring small additional amounts of memory to perform the sorting.

<p align="center">
  <img src="https://3.bp.blogspot.com/-6e1hp4vtW2A/W5OGy25HrgI/AAAAAAAADrU/aaM5W--ufugeDxMvLW3iGCIS5HjXkDcDwCLcBGAs/s1600/quick_sort_partition_animation.gif">
 </p>
 
 ### Algorithm for quick Sort
**Step-1** − Make the right-most index value pivot\
**Step-2** − partition the array using pivot value\
**Step-3** − quicksort left partition recursively\
**Step-4** − quicksort right partition recursively

<p align="center">
  <img src="https://www.techiedelight.com/wp-content/uploads/Quicksort.png">
 </p>

### Algorithm for partition
**Step 1** − Choose the highest index value has pivot\
**Step 2** − Take two variables to point left and right of the list excluding pivot\
**Step 3** − left points to the low index\
**Step 4** − right points to the high\
**Step 5** − while value at left is less than pivot move right\
**Step 6** − while value at right is greater than pivot move left\
**Step 7** − if both step 5 and step 6 does not match swap left and right\
**Step 8** − if left ≥ right, the point where they met is new pivot\

 ### Time complexity:
 **BEST CASE**: Ω(nlog(n))\
 **AVERAGE CASE**: θ(nlog(n))\
 **WORST CASE**: O(n*n)
 ### SPACE COMPLEXITY: O(n) 
