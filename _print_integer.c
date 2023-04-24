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
	int digits = 0;
	int divisor = 1;
	int j, a;
	int i = va_arg(args, int);
	int temp = i;

	if (i < 0)
	{
		_putchar('-');
		i = -i;
		count++;
	}

	while (temp != 0)
	{
		digits++;
		temp /= 10;
	}

	while (digits > 0)
	{
		for (j = 1; j < digits; j++)
		{
			divisor *= 10;
		}

		a = i / divisor;
		_putchar(a + '0');
		count++;

		i %= divisor;
		digits--;
	}
	return (count);
}
