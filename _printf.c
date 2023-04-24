#include "main.h"

/**
* _printf - produces output according to a format.
* @format: string to print.
* Return: the length of the string.
*/
int _printf(const char *format, ...)
{
	char buffer[1024];
	int i, x = 0;
	int *ptr = &x;
	int *second_ptr = &i;

	va_list(args);
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			_print_checker(format[i + 1], buffer, ptr, args, second_ptr);
		}
		else
		{
			buffer[x] = format[i];
			x++;
		}
	}
	va_end(args);
	buffer[x] = '\0';
	write(1, buffer, x);
	return (x);
}
