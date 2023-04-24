#include "main.h"

/**
* _print_string - prints a string
* @args: _printf's arguments
* Return: value_c length
*/
int _print_string(va_list args)
{
	int i, len = 0;
	char *str = "(null)";
	char *value_c = va_arg(args, char*);

	if (value_c == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
			len += 1;
		}
	}
	else
	{
		for (i = 0; value_c[i] != '\0'; i++)
		{
			_putchar(value_c[i]);
			len += 1;
		}
	}
	return (len);
}
