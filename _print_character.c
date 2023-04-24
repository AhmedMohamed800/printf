#include "main.h"

/**
* _print_character - prints characters
* @args: _printf argumetns
* Return: (1)
*/
int _print_character(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
