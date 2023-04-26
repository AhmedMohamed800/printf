#include "main.h"

/**
* _print_integer - print integer
* @args: integer to be printed
*
* Return: numbers of characters printed
*/
int _print_integer(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, div = 1;
	int count = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			div = div * 10;
			num = num / 10;
		}
		num = n;
		while (div > 0)
		{
			digit = num / div;
			_putchar(digit + '0');
			num = num - (digit * div);
			div = div / 10;
			count++;
		}
	}
	_putchar(last + '0');

	return (count);
}
