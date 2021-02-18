#include "holberton.h"

/**
 * print_rev - imprime el string al contrario
 *
 * @s: string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar(10);
}
