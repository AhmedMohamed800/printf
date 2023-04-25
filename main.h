#ifndef __main__
#define __main__

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

#define UNUSED(x) (void)(x)

/**
* struct list_of_func - the conversion specifiers for printf
* @func: pointer to a function
* @checker: id
*/
typedef struct list_of_func
{
	int (*func)();
	char *checker;
} list_of_func;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_percent(va_list args);
int _print_character(va_list args);
int _print_string(va_list args);
int _print_integer(va_list args);
int _print_int_i(va_list args);
int _print_binary(va_list args);
#endif
