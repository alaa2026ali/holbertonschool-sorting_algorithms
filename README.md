# C - Sorting algorithms and Big O

## Project Description
This project focuses on implementing and understanding different sorting algorithms in C, and analyzing their efficiency using Big O notation. The goal is to learn how to choose the best sorting algorithm depending on the input size and conditions.

## Learning Objectives
- Understand different sorting algorithms
- Learn how to analyze time complexity (Big O)
- Compare efficiency between algorithms
- Understand stable vs unstable sorting
- Improve problem-solving skills in C

## Requirements
- OS: Ubuntu 20.04 LTS
- Compiler: gcc
- Flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- Code style: Betty style
- No global variables
- No more than 5 functions per file

## Data Structure
```c
typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Sorting Algorithms and Big O Analysis


| File | Algorithm | Best Case | Average Case | Worst Case |
| --- | --- | --- | --- | --- |
| 0-bubble_sort.c | Bubble Sort | O(n) | O(n^2) | O(n^2) |
| 1-insertion_sort.c | Insertion Sort | O(n) | O(n^2) | O(n^2) |
| 2-selection_sort.c | Selection Sort | O(n^2) | O(n^2) | O(n^2) |
| 3-quick_sort.c | Quick Sort | O(n log n) | O(n log n) | O(n^2) |

## Compilation
Example:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble`

Run:
`./bubble`

## Files Description
- sort.h: Header file with prototypes and structures
- print_array.c: Prints array after each swap
- print_list.c: Prints doubly linked list
- 0-bubble_sort.c: Bubble sort algorithm
- 1-insertion_sort.c: Insertion sort algorithm
- 2-selection_sort.c: Selection sort algorithm
- 3-quick_sort.c: Quick sort algorithm
- *-O: Files containing Big O analysis

## Authors
- Alaa Aldwasari
- Alraddadi Muhannad

## Notes
- This project is part of Holberton School curriculum.
- All algorithms are implemented in C.
- Focus is on efficiency and understanding Big O.

