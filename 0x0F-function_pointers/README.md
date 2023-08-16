# 0x0F. C - Function Pointers
- A function pointer is a concept in programming languages that support pointers, like C and C++, which allows you to store the address of a function and then later call that function indirectly through the pointer. In other words, a function pointer points to a memory address where a function is stored, enabling you to invoke the function through the pointer.

![pointers](https://github.com/obithelight/alx-low_level_programming/assets/91734251/d08c0b3b-b350-438d-b2c2-45af8d8ce905)

## Learning Objectives

## General
	What are function pointers and how to use them
	What does a function pointer exactly hold
	Where does a function pointer point to in the virtual memory

### What are function pointers and how to use them
- Handling function pointers requires a good understanding of memory management, pointer arithmetic, and the intricacies of the programming language you're using. Using function pointers can be powerful for implementing dynamic behavior, such as callbacks, event handling, or creating generic data structures, but they also require careful consideration to avoid memory-related issues.

### What does a function pointer exactly hold
- A function pointer holds the memory address of a function. It doesn't hold the actual function code or data; it just points to the location in memory where the function's machine code is stored.

### Where does a function pointer point to in the virtual memory
- A function pointer points to a specific memory address in the virtual memory of your program. This address corresponds to the location where the machine code for the function is stored. The exact location in virtual memory depends on various factors, including the operating system, memory layout, and compiler.
- In most cases, function pointers in C and C++ point to the beginning of the machine code for the specified function. When you invoke the function through the pointer, the CPU jumps to that memory address and starts executing the code of the function.
