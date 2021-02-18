#include "holberton.h"

/**
 * _strlen - misma funcion
 *
 *
 * @s: string a verificar
 * Return: returns el largo
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
 * puts_half - imprime la mitad
 *
 * @str: string segunda mitad
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	i = _strlen(str);
	if (i % 2 != 0)
		i++;
	i /= 2;
	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar(10);
}
