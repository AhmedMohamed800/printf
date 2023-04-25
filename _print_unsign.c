#include "main.h"

/**
* _print_unsign - prints unsigned number
* @args: format argument
* Return: number's length
*/
int _print_unsign(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int digits = 1;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while ((num / digits) >= 10)
	{
		digits *= 10;
	}
	while (digits != 0)
	{
		count++;
		_putchar((num / digits) % 10 + '0');
		digits /= 10;
	}
	return (count);
}
