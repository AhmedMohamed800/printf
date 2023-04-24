#include "main.h"

/**
* _print_numbers - Prints integer
* @args: value of arguments
*
* Return: numbers of characters printed
*/
int _print_numbers(va_list args)
{
	int num, digits, temp, count;
	int i;

	count = 0;

	i = va_arg(args, int);

	if (i < 0)
	{
		num = (i * -1);
		_putchar(45);
		count += 1;
	}
	else
		num = i;

	digits = num;
	temp = 1;
	while (digits > 9)
	{
		digits /= 10;
		temp *= 10;
	}

	while (temp >= 1)
	{
		count += 1;
		_putchar(((num / temp) % 10) + '0');
		temp /= 10;
	}
	return (count);
}
