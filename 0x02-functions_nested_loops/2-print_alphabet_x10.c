#include "holberton.h"

/**
 * print_alphabet_x10 - Imprimir el alfabeto 10 veces en minusculas.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
