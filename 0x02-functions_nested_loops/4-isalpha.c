#include "holberton.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: caracter a buscarVerificar si el caracter es alfanumerico.
 *
 * Return: 1 si el cararcter es letra.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
