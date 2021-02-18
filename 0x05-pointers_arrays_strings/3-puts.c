#include "holberton.h"

/**
 * _puts - imprimir string
 *
 * @str: string a imprimir
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar(10);
}
