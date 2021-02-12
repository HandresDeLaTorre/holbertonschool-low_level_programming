#include "holberton.h"

/**
 * more_numbers - prints 0-14, followed by a new line
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int num, count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
