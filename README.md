# push_swap
Welcome to my push_swap repository! This project features my implementation of a stack sorting algorithm at 1337.
The goal is to efficiently sort a stack of integers using a limited set of predefined operations.

## Overview
### Files
- push_swap.h: Header file containing function prototypes, necessary includes, and any macros or constants.
- push_swap.c: Main program file containing the main function and the core logic for sorting the stack.
- libft: A custom library containing useful utility functions.
## Usage
### Compilation
Compile the program using the provided Makefile:

```
make
```
This will generate the push_swap executable.

### Execution
Run the program by providing a list of integers as arguments:
```
./push_swap 4 2 8 5
```
This will output a series of operations to sort the stack.

Example
```
./push_swap 4 2 8 5
```
This example sorts the stack [4, 2, 8, 5] using the fewest possible operations.

Implementation Details
The push_swap program uses a linked list to represent the stack and implements various sorting algorithms to efficiently reorder the stack elements.

Linked List Creation
The create_linked_list function is responsible for creating a linked list from the input integers.

List Node Creation
The ft_lstnew_1 function creates a new node for the linked list.

Note
This push_swap implementation is designed for educational purposes, and the focus is on creating an efficient sorting algorithm for stacks. Contributions and feedback are welcome to enhance and refine the implementation for different use cases.

Happy sorting with push_swap!
