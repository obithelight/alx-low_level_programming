#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_form - Define a struct to figure out how to print
 * @c: Character to check for
 * @f: Pointer to function to call
 */
typedef struct print_form
{
	char *c;
	void (*f)();
} print_form_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif /* VARIADIC_FUNCTIONS_H */
