#include "holberton.h"

/**
 * swap_int - swaps = cambio
 *
 *
 * @a: puntero
 * @b: puntero
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
