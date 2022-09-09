#include <stdio.h>

/**
 * main- entrypoint
 *
 * Return: Always 0(success)
 */

int main(void)

{
	char alphabet;

	for (alphabet = 122 ; alphabet >= 97; alphabet--)

	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);

}
