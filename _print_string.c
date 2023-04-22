#include "main.h"

/**
* _print_string - prints a string
* @buffer: pointer buffer handler
* @x: pointer to x variable
* @args: _printf's arguments
* Return: nothing
*/
void _print_string(char *buffer, int *x, va_list args)
{
	int y, i;
	char *str = "(null)";
	char *value_c = va_arg(args, char*);

	if (value_c == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			buffer[*x] = str[i];
			(*x)++;
		}
	}
	else
	{
		for (y = 0; value_c[y] != '\0'; y++)
		{
			buffer[*x] = value_c[y];
			(*x)++;
		}
	}
}
