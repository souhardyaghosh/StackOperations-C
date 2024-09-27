
StackOperations-C
=================

Welcome to the StackOperations-C repository! This project provides a comprehensive implementation of stack operations for different data types (int, float, char). You can use this to handle stack-based operations in C programs with ease.

Clone the Repository
--------------------

To get started, you can clone the repository using the following link:

    git clone https://github.com/souhardyaghosh/StackOperations-C.git

Setting Up
----------

After cloning, navigate to the repository directory:

    cd StackOperations-C

Ensure that the header file `stack_func.h` is in the same directory as your source code file when you compile and run the program.

### Compiling and Running

If you have GCC installed, you can directly compile the program with the following command:

    gcc main.c -o main && ./main

If GCC is not installed, follow these steps to install it:

    
    # On Ubuntu
    sudo apt update
    sudo apt install gcc
    
    # On Windows (via MinGW)
    pacman -S mingw-w64-gcc
        

Functions Overview
------------------

### Integer Stack Functions

*   `void pushI(int value)` - Pushes an integer value onto the stack.
*   `int popI()` - Pops an integer value from the stack.
*   `void printStackI()` - Prints all integer values in the stack.

### Float Stack Functions

*   `void pushF(float value)` - Pushes a float value onto the stack.
*   `float popF()` - Pops a float value from the stack.
*   `void printStackF()` - Prints all float values in the stack.

### Char Stack Functions

*  `void pushC(char value)` - Pushes a char value onto the stack.
*   `char popC()` - Pops a char value from the stack.
*   `void printStackC()` - Prints all char values in the stack.

How to Use
----------

Here’s an example of how to use the stack functions in your `main.c` file:

    
    #include "stack_func.h"
    
    int main() {
        initStack(MAX);
    
        pushI(10);
        pushI(20);
        printStackI(); // Output: 10 20
    
        printf("Popped int: %d\n", popI());
        clearStack();
    
        return 0;
    }
        

Contributing
------------

This project is open to contributions! Feel free to fork the repo, make changes, and submit a pull request. We welcome any improvements or new features you would like to propose.

Contact me via GitHub or email if you have any questions or suggestions.

[Visit the GitHub Repository](https://github.com/souhardyaghosh/StackOperations-C.git)



