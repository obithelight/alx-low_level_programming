# 0x15. C - File I/O
## C, Syscall

File I/O in C programming refers to Input and Output operations involving files. It allows you to read data from files (input) and write data to files (output). Files are a way to store data on a more permanent basis, such as text files, binary files, or other types of files.

## File I/O typically involves the following operations:

-	Opening a File: Before you can read from or write to a file, you need to open it using functions like fopen(). When opening a file, you specify the file's name and the mode (e.g., read, write, append, binary, etc.).

-	Reading from a File: To read data from a file, you use functions like fread() or fgets() to retrieve data from the file and store it in variables in your program's memory.

-	Writing to a File: To write data to a file, you use functions like fwrite() or fprintf() to write data from your program's memory into the file.

-	Closing a File: After you're done with a file, you should close it using the fclose() function. This ensures that any pending data is flushed to the file and resources are released.

## File Descriptors 
File descriptors are small integers used to identify open files within a process. They are non-negative integers.

### Standard File Descriptors: 
There are three standard file descriptors:

-	stdin (File Descriptor 0): Standard input, often connected to the keyboard.
-	stdout (File Descriptor 1): Standard output, typically the terminal.
-	stderr (File Descriptor 2): Standard error output, also typically the terminal.

### POSIX Names for Standard File Descriptors:

	STDIN_FILENO (0)
	STDOUT_FILENO (1)
	STDERR_FILENO (2)

### File Flags:

	O_RDONLY: Open for read-only.
	O_WRONLY: Open for write-only.
	O_RDWR: Open for both reading and writing.

## File Permissions 
File permissions define who can read, write, and execute a file. You can set them when creating a file using the open system call, as shown in the first example. The 0644 value specifies the permissions.

## System Call 
A system call is a request to the operating system's kernel to perform an operation, like file I/O or process management, on behalf of a user-level program.

## Function vs. System Call

A function is a code block that performs a specific task within a program. It operates entirely in user mode and uses other functions within the same program.

A system call is a request for a service provided by the operating system. It involves a context switch from user mode to kernel mode, where the OS carries out the requested operation, such as I/O, and then returns control to the user program. Functions are typically higher-level constructs, while system calls provide low-level access to the OS functionality.
