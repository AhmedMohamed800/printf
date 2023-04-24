#include "main.h"

/**
* _print_binary - the unsigned int argument is converted to binary
* @args: fomrat arguments
* Return: binary length
*/
int _print_binary(va_list args)
{
	unsigned int mask, value;
	int count = 0;

	value = va_arg(args, unsigned int);
	if (value == 0)
	{
		_putchar('0');
		return (1);
	}
	mask = 1 << (sizeof(unsigned int) * 8 - 1);

	while (mask > 0 && (value & mask) == 0)
	{
		mask >>= 1;
	}
	while (mask > 0)
	{
		_putchar((value & mask) ? '1' : '0');
		mask >>= 1;
		count++;
	}
	return (count);
}
