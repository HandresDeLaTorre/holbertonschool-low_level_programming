#include "holberton.h"

/**
 * _strlen - misma variable
 *
 *
 * @s: string a verificar
 * Return: returns 
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
 * _strcpy - copia el string
 *
 *
 * @src: string a copiar
 * @dest: espacio donde se copia
 * Return: returna el puntero
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *retval;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	retval = dest;

	return (retval);
}
