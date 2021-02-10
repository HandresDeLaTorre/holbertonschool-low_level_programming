#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: returnar   0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
