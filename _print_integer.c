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
	int digits, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		num = num * -1;
		_putchar('-');
		count++;
	}

	digits = 1;
	while ((num / digits) >= 10)
	{
		digits *= 10;
	}
	while (digits != 0)
	{
		count += 1;
		_putchar(((num / digits) % 10) + '0');
		digits /= 10;
	}

	return (count);
}
