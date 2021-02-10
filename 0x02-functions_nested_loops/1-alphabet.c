#include "holberton.h"

/**
 * print_alphabet - imprimir alfabeto.
 */
void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++)
		_putchar(letra);

	_putchar('\n');
}
