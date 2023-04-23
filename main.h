#ifndef __main__
#define __main__

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct list_of_func - the conversion specifiers for printf
* @func: pointer to a function
*/
typedef struct list_of_func
{
	void (*func)();
} list_of_func;

int _putchar(char c);
int _printf(const char *format, ...);
void _print_percent(char *buffer, int *x);
void _print_character(char *buffer, int *x, va_list args);
void _print_string(char *buffer, int *x, va_list args);
void _print_checker(char character_to_check,
		char *buffer, int *ptr, va_list args, int *second_ptr);

#endif
