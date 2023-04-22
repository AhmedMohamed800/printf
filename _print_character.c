#include "main.h"

/**
* _print_character - prints characters
* @buffer: pointer to buffer variable
* @x: point to x variable
* @value_c: the character value
* Return: Nothing
*/
void _print_character(char *buffer, int *x, int value_c)
{
	buffer[*x] = value_c;
	(*x)++;
}
