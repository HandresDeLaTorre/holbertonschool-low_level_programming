#include "holberton.h"

/**
 * _strlen - largo del string
 *
 *
 * @s: verificar string
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
