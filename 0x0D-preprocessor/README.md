# 0x0D. C - Preprocessor
- The C preprocessor modifies a source code file before handing it over to the compiler. You're most likely used to using the preprocessor to include files directly into other files, or #define constants. Still, the preprocessor can also be used to create "inlined" code using macros expanded at compile time and to prevent code from being compiled twice.

# Resources
	Understanding C program Compilation Process
	Object-like Macros
	Macro Arguments
	Pre Processor Directives in C
	The C Preprocessor
	Standard Predefined Macros
	include guard
	Common Predefined Macros

# Learning Objectives
- There are basically three uses of the preprocessor--directives, constants, and macros. Directives tell the preprocessor to skip part of a file, include another file, or define a constant or macro. Directives always begin with a sharp sign (#) and for readability should be placed flush to the left of the page. All other preprocessor uses involve processing #define'd constants or macros. Typically, constants and macros are written in ALL CAPS to indicate they are special.

## General
	What are macros and how to use them
	What are the most common predefined macros
	How to include guard your header files
