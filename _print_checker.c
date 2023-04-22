#include "main.h"

/**
* _print_checker - checks the value after %
* @character_to_check: character to check
* @buffer: buffer variable
* @ptr: pointer to x
* @args: the argumetns in _printf
* return: nothing.
*/
void _print_checker(char character_to_check,
		char *buffer, int *ptr, va_list args)
{
	list_of_func print_family[] = {{_print_character},
		{_print_percent}, {_print_string}};

	switch (character_to_check)
	{
		case 'c':
			print_family[0].func(buffer, ptr, args);
			break;
		case '%':
			print_family[1].func(buffer, ptr);
			break;
		case 's':
			print_family[2].func(buffer, ptr, args);
			break;
		default:
			break;
	}
}
