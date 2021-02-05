#include <stdio.h>

/**
 * main - imprimir el alfabeto en minusculas
 *
 * Return: Siempre  0.
 */
int main(void)
{
	char L;

	for (L = 97; L <= 122; L++)
		putchar(L);

	putchar('\n');

	return (0);
}
