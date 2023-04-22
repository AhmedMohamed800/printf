#include "main.h"

/**
* _print_percent - print percent character
* @buffer: pointer to buffer variable
* @x: pointer to x
*/
void _print_percent(char *buffer, int *x)
{
	buffer[*x] = '%';
	(*x)++;
}
