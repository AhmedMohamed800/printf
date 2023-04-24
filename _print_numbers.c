#include "main.h"

/**
* print_number - Prints numbers
* @n: number to be printed
*
* Return: numbers of characters printed
*/
int print_number(int n)
{
	unsigned int num;
	int digits, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		num = -n;
		_putchar('-');
		count++;
	}
	else
	{
		num = n;
	}

	digits = 1;
	while ((num / digits) >= 10)
		digits *= 10;

	while (digits != 0)
	{
		count += 1;
		_putchar((num / digits) % 10 + '0');
		digits /= 10;
	}

	return (count);
}

/**
* _print_integer- Prints integer
* @args: value of arguments
*
* Return: numbers of characters printed
*/
int _print_integer(va_list args)
{
	int n = va_arg(args, int);
	return (print_number(n));
}
