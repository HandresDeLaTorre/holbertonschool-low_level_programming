#include "holberton.h"

/**
 * _abs - computa el valor absoluto de un entero.
 * @n: The integer to be computed.
 *
 * Return: Returna el valor absoluto de un entero.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
