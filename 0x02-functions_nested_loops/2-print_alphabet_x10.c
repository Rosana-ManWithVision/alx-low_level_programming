#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z' | ; letter++)
			_putchar(letter);
		i_putchar('/n');
	}
}

