#include "main.h"

/**
 * _print_integer - prints an integer
 * @args: variable argument list
 *
 * Return: number of characters printed
 */

int _print_integer(va_list args)
{
	int count = 0;
	int i = va_args(args, int);

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		count++;
	}

	if (i / 10)
	{
		count += _print_integer(va_arg(args, int) / 10);
	}

	_putchar(i % 10 + '0');
	count++;

	return (count);
}
