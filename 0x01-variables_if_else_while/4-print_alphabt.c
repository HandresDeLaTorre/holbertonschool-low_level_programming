#include <stdio.h>

/**
 * main - excluir dos letras del alfabeto
 * return: 0
 */

int main(void)
{
	char L;

	for (L = 97; L <= 122; L++)

	if (L != 101 && L != 113)
		putchar(L);

	putchar('\n');

	return (0);
}
