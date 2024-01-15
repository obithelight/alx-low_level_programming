# 0x18. C - Dynamic libraries

   ![images](https://github.com/obithelight/alx-low_level_programming/assets/91734251/d18388ef-ed3e-436f-b303-3f7ca6f8148b)

- A dynamic library (also known as a `shared library`) is a type of library that is loaded into memory at runtime by a program. It contains code and data that multiple programs can use simultaneously, allowing for efficient code reuse and sharing. Dynamic libraries are different from static libraries, which are linked at compile-time.

## How Dynamic Libraries Work:
- When a program is executed, the dynamic linker/loader (commonly ld.so on Linux systems) is responsible for resolving symbols and loading dynamic libraries into memory. It searches for the required libraries in predefined paths and loads them. This allows multiple programs to share the same library, reducing the overall memory footprint.

## Creating a Dynamic Library:
To create a dynamic library, you typically compile your source code with the -shared option. For example, using `gcc`:

	gcc -shared -o libexample.so example.c

This command generates a dynamic library named libexample.so from the source file example.c.

## Using a Dynamic Library:
To use a dynamic library in your program, you need to link it during compilation and provide the necessary header files. For example:

	gcc -o myprogram myprogram.c -lexample -L/path/to/library -I/path/to/header

This command compiles myprogram.c and links it with the libexample.so library.

## $LD_LIBRARY_PATH:
`$LD_LIBRARY_PATH` is an environment variable that specifies a list of directories where the dynamic linker/loader looks for shared libraries before searching the default system paths. You can set this variable to include the directory containing your custom libraries:

	export LD_LIBRARY_PATH=/path/to/custom/libraries:$LD_LIBRARY_PATH

This way, when you run your program, the dynamic linker will search for libraries in the specified path.

## Differences Between Static and Shared Libraries:

- Static Libraries: Linked at compile-time, resulting in a larger executable. Each program gets its copy of the library code.
- Shared Libraries: Linked at runtime, allowing multiple programs to share the same copy of the library code. Results in smaller executables and better memory usage.

## Basic Commands:

- `nm`: Displays symbol names in object files or libraries. For example: `nm libexample.so`.
- `ldd`: Shows shared library dependencies of an executable. For example: `ldd myprogram`.
- `ldconfig`: Updates the system's dynamic linker cache. It is typically run after installing or removing shared libraries. For example: `sudo ldconfig`.
- These commands are useful for inspecting and managing dynamic libraries and their dependencies on a system.
