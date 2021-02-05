#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char L;

	for (L = 97; L <= 122; L++)
		putchar(L);

	for (L = 65; L <= 90; L++)
		putchar(L);

	putchar('\n');

	return (0);
}
