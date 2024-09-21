## Bubble Sort Implementation in C

This program demonstrates the implementation of the bubble sort algorithm to sort an array of integers. It generates a set of random integers, displays them, sorts the integers using the bubble sort technique, and then displays the sorted array

**Features**

- Bubble Sort Algorithm: A straightforward sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
- Random Number Generation: Generates a set of random integers to demonstrate the sorting functionality.
- Dynamic Output: Displays both the original and sorted arrays for comparison.

**Code Structure**

*Main Functions*

1. switch_no(int *a, int *b): Swaps two integers passed by reference.
2. print_array(int array[], int size): Prints the contents of the integer array.
3. bubble_sort(int array[], int size): Sorts the given array using the bubble sort algorithm. Implements an optimization to terminate early if no swaps occur during a pass.
4. main(void): Initializes the program, generates random numbers, prints the original array, performs sorting, and then prints the sorted array.

**Compilation and Execution**

To compile and run the program, follow these steps:

- Save the code in a file named ```bubble_sort.c.```
- Open a terminal and navigate to the directory containing the file.
- Compile the code using the following command: ```gcc bubble_sort.c -o bubble_sort```
- Execute the compiled program: ```./bubble_sort```

**Example Output**

```
Your array of random numbers: 
23  45  67  12  89  34  10  50  78  33  ...
Your sorted array: 
10  12  23  33  34  45  50  67  78  89  ...
```

**Development Skills**

This project serves as a practical exercise in:

- Understanding sorting algorithms, particularly bubble sort.
- Using arrays and pointers in C programming.
- Implementing random number generation in C.
- Developing functions and modular programming practices.
