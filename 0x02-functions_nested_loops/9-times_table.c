#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int numero, multiplicador, producto;

	for (numero = 0; numero <= 9; numero++)
	{
		_putchar('0');

		for (multiplicador = 1; multiplicador <= 9; multiplicador++)
		{
			_putchar(',');
			_putchar(' ');

			producto = numero * multiplicador;

			if (producto <= 9)
				_putchar(' ');
			else
				_putchar((producto / 10) + '0');

			_putchar((producto % 10) + '0');
		}
		_putchar('\n');
	}
}
