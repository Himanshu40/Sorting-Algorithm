# Sorting-Algorithm

### [Bubble Sort](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/BubbleSort.c)
Bubble Sort is the easiest and simple sorting algorithm that you have ever known. Bubble sort repeatedly compares adjacent elements through the list and swaps them if any element is in wrong order.

![notFound](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif "An example of bubble sort")

| **Bubble Sort Performance** | **Comparisons & Swaps**            |
| --------------------------- | :--------------------------------: |
| Worst-Case Performance      | ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) comparisons, ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) swaps   |
| Best-Case Performance       | ![O(n)](https://render.githubusercontent.com/render/math?math=O(n)) comparisons, ![O(1)](https://render.githubusercontent.com/render/math?math=O(1)) swaps       |
| Average-Case Performance    | ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) comparisons, ![O(n^2)](https://render.githubusercontent.com/render/math?math=O(n%5E2)) swaps   |

## Tech/Framework Used
+ gcc
+ vscode

## Tests
Since these sorting programs are tested in *MX Linux*. So *gcc* is required to compile these programs.
+ To compile(Here *run* is the name of executable file of *Bubble Sort*)
```
h1manshu@asus:~/Sorting-Algorithm
$ gcc -o run BubbleSort.c 
```
+ To run
```
h1manshu@asus:~/Sorting-Algorithm
$ ./run 
```
+ Output of Bubble Sort
```
Enter the size of array(max 20): 10

Enter the elements in the array: 5
6
3
9
10
1
2
8
0
7

---BUBBLE SORT---

Elements in ascending order:
0 1 2 3 5 6 7 8 9 10
```

## Contribute
You are freely welcome to send me a pull request regarding typo correction, bug. Your contribution will be highly appreciable :thumbsup:

## Credits
+ Wikipedia
+ geeksforgeeks
+ Data Structures and Algorithm Analysis in C by Mark Allen Weiss

## License
[GNU GENERAL PUBLIC LICENSE](https://github.com/Himanshu40/Sorting-Algorithm/blob/master/LICENSE)
