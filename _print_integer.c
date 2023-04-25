#include "main.h"

/**
* _print_integer - print integer
* @args: integer to be printed
*
* Return: numbers of characters printed
*/
int _print_integer(va_list args)
{
	int num = va_arg(args, int);
	int digits, div,  count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	digits = 1;
	div = num;
	while (div / 10 != 0)
	{
		digits *= 10;
		div /= 10;
	}
	while (digits != 0)
	{
		_putchar((num / digits) + '0');
		num %= digits;
		digits /= 10;
		count++;
	}

	return (count);
}
