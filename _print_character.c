#include "main.h"

/**
* _print_character - prints characters
* @buffer: pointer to buffer variable
* @x: point to x variable
* @args: _printf argumetns
* Return: Nothing
*/
void _print_character(char *buffer, int *x, va_list args)
{
	buffer[*x] = va_arg(args, int);
	(*x)++;
}
