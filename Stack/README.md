# Student ID Stack Management System

A simple menu-driven C++ program that demonstrates the implementation of a **Stack using an Array**. The program stores student IDs and follows the **LIFO (Last In, First Out)** principle.

## Features

- **Push:** Insert a student ID into the stack.
- **Pop:** Remove the student ID from the top of the stack.
- **Peek:** View the top student ID without removing it.
- **Display:** Show all IDs from top to bottom.
- **Overflow Handling:** Warns when the stack is full.
- **Underflow Handling:** Warns when attempting to pop from an empty stack.
- **Menu-driven interface:** Allows users to select operations repeatedly until exiting.

## Stack Details

- Maximum capacity: **5 student IDs**
- Initial value of `top`: **-1** (stack is empty)
- Full stack condition: `top == SIZE - 1`
- Empty stack condition: `top == -1`

## How to Compile and Run

### Using g++

```bash
g++ Student_ID_Stack.cpp -o Student_ID_Stack
./Student_ID_Stack
```

On Windows, run:

```bash
Student_ID_Stack.exe
```

## Menu

```text
===== Student ID Stack Management =====
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter your choice:
```

## Example Operations

1. Push `101`
2. Push `102`
3. Push `103`
4. Display
5. Pop
6. Peek

The stack follows LIFO, so the most recently inserted ID is removed first.

## Learning Outcomes

After completing this program, students should be able to:

- Understand the LIFO principle.
- Implement a stack using an array.
- Perform Push, Pop, Peek, and Display operations.
- Track the stack's top position using a variable.
- Handle stack overflow and underflow conditions.

## File

- `Student_ID_Stack.cpp` — Source code of the stack management system.
