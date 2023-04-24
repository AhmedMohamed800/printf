#include "main.h"

/**
* _printf - produces output according to a format.
* @format: string to print.
* Return: the length of the string.
*/
int _printf(const char *format, ...)
{
	int i = 0, j, count = 0;
	list_of_func print_family[] = {{_print_character, "%c"},
<<<<<<< HEAD
		{_print_string, "%s"}, {_print_percent, "%%"}, {_print_integer, "%d"}};
=======
		{_print_string, "%s"}, {_print_percent, "%%"},
		{_print_binary, "%b"}};
>>>>>>> 8d40a6c6c63943117d3f861912fd481d97a7c3cf

	va_list(args);
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Back:
	while (format[i] != '\0')
	{
		for (j = 0; j < 4; j++)
		{
			if ((format[i] == print_family[j].checker[0])
					&& (format[i + 1] == print_family[j].checker[1]))
			{
				count += print_family[j].func(args);
				i = i + 2;
				goto Back;
			}
		}
		_putchar(format[i]);
		i++;
		count++;
	}
	va_end(args);
	return (count);
}
