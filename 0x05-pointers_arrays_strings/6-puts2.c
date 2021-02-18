#include "holberton.h"

/**
 * _strlen - retorna el length con un caracter
 *
 *
 * @s: string 
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * puts2 - prints 
 *
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}
