#include <stdio.h>

/**
 * Main - Imprimir los numeros
 * descrition programa para imprimir los numero del 1 al 10
 * Return: siempre 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
